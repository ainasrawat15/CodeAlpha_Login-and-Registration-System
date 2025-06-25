# CodeAlpha_Login-and-Registration-System
A simple console-based Login and Registration System built using C++. This project allows users to register and log in with a username and password. All user credentials are stored in a local file using basic file handling techniques.

## 📌 Features

- Register new users
- Login with existing credentials
- Store user data in a `.txt` file
- Console-based menu system
- Input validation and error messages

## 💻 Technologies Used

- C++
- File I/O using `fstream`
- Standard Template Library (STL)

## 🚀 Getting Started

Follow the steps below to run the project on your local machine:

### 1. Clone the repository

```bash
git clone https://github.com/your-username/login-system-cpp.git
cd login-system-cpp
2. Compile the code
bash
Copy
Edit
g++ main.cpp -o login
3. Run the executable
bash
Copy
Edit
./login
📝 How It Works
On running the program, users are prompted with options to Register or Login.

During registration, the system checks if the username already exists.

During login, the system validates the entered credentials from the stored file.

All user credentials are saved in a text file (e.g., users.txt) in the format username password.

Note: This version does not include encryption. For real-world applications, always hash and salt passwords before storage.

🎯 Use Cases
Mini-project for C++ learners

Demonstrating file handling

Practicing user authentication logic

