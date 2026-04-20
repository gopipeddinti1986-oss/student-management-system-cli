# 🎓 Student Management System (CLI)

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg"/>
  <img src="https://img.shields.io/badge/Type-CLI-green.svg"/>
  <img src="https://img.shields.io/badge/Status-Complete-brightgreen.svg"/>
</p>

---

## ✨ Features

* 🔐 **Login Authentication**
* ➕ **Add Student Records**
* 📄 **View All Students**
* 🔍 **Search by ID**
* ✏️ **Update Student Details**
* ❌ **Delete Records**
* 📊 **Sort Students (Marks / Name)**
* 💾 **File Persistence (Binary Files)**
* 🧩 **Modular Code Structure**

---

## 🧠 Concepts Used

* Structs & Arrays
* File Handling (Binary I/O)
* Modular Programming (Multi-file design)
* Input Validation
* Sorting Algorithms
* Basic Authentication System

---

## 📂 Project Structure

```
student-management-system-cli/
│
├── src/
│   ├── main.c
│   ├── student.c
│   ├── file.c
│   ├── utils.c
│   ├── login.c
│
├── include/
│   └── students.h
│
├── data/
│   ├── students.dat
│   ├── login.dat
│
├── README.md
├── .gitignore
```

---

## ⚙️ How to Run

### 🔧 Compile

```
gcc src/*.c -Iinclude -o student
```

### ▶️ Run

```
./student
```

---

## 🔑 Default Login

```
Username: admin
Password: 1234
```

---

## 📸 Sample CLI Interface

```
=====================================
   STUDENT MANAGEMENT SYSTEM
=====================================

1. Add Student
2. View Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Exit
```

---

## 🚀 Key Highlights

* ✔️ Clean modular architecture
* ✔️ Persistent data storage using files
* ✔️ Real-world CRUD operations
* ✔️ CLI-based user interface
* ✔️ Beginner-friendly yet scalable

---

## 🔮 Future Improvements

* 🔐 Password masking
* 👥 Multiple user roles
* 📤 Export to CSV
* 🌐 GUI / Web version

---

## 👨‍💻 Author

**Gopi**

---

## ⭐ If you like this project

Give it a ⭐ on GitHub — it helps a lot!
