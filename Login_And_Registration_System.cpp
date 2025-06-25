/*LOGIN AND REGISTRATION SYSTEM
registration():takes username,password
login():reads credentials and verificaton
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//function to check if name exists
bool userexists(string username){
    ifstream file("user.txt");
    string line;
    while(getline(file,line)){
          size_t pos=line.find(',');
          if(line.substr(0,pos)==username){
            return true;
          }
    }
    return false;
}
//function to register
void registeruser(){
     string password,username;
     cout<<"enter username:";
     cin>>username;
     if(userexists(username)){
        cout<<"username already exists. try different one"<<endl;
     }
     cout<<"enter password";
     cin>>password;
     ofstream file("user.txt",ios::app);
     file<<username<<","<<password<<endl;
     file.close();
     cout<<"registration successful!"<<endl;

     }

//function to login
void loginuser(){
    string username,password;
    cout<<"enter username:";
    cin>>username;
    cout<<"enter password:";
    cin>>password;

    ifstream file("users.txt");
    string line;
    bool success=false;

    while(getline(file,line)){
        size_t pos=line.find(',');
        string storeduser=line.substr(0,pos);
        string storedpass=line.substr(pos+1);
        if(storeduser==username&&storedpass==password){
            success=true;
            break;
        }
    if(success){
        cout<<"login successful! welcome,"<<username<<endl;
    }
    else{
        cout<<"login failed! username or password is incorrect"<<endl;
    }
    }
}

//main code
int main(){
int choice;
do{
    cout<<"-----LOGIN AND REGISTRATION SYSTEM-----"<<endl;
    cout<<"1.REGISTER"<<endl;
    cout<<"2.LOGIN"<<endl;
    cout<<"3.EXIT"<<endl;

    cout<<"Enter your choice";
    cin>>choice;

    switch(choice){
        case 1:registeruser();
        case 2:loginuser();
        case 3:cout<<"-----Exiting-----";
        break;
        default :
            cout<<"invalid choice! please choose from given option"<<endl;
    }
    }while (choice!=3);
    return 0;
}
