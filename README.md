# Student Management System in C++

A console-based **Student Management System** developed in C++ to practice and demonstrate **Object-Oriented Programming (OOP)** and **STL concepts**.

The system allows users to add, view, search, update, and delete student records through a simple menu-driven interface.

## Features

* Add multiple student records
* Display all student records
* Search students using Roll Number
* Update existing student information
* Delete student records
* Dynamic storage using `vector`
* Menu-driven interface
* Handles empty records
* Handles invalid menu choices
* Uses private data members for encapsulation

## Student Information

Each student record contains:

* Name
* Roll Number
* Course
* Class
* Contact Number

## OOP Concepts Demonstrated

### 1. Class

The `Student` class represents a student and contains both data and functions related to that student.

### 2. Objects

Each student is represented as an object of the `Student` class.

```cpp
Student student(...);
```

### 3. Encapsulation

Student information is stored using `private` data members.

```cpp
private:
    string name;
    string rollNo;
    string course;
    string studentClass;
    string contact;
```

The data is accessed through public member functions.

### 4. Constructor

The constructor initializes student information when an object is created.

```cpp
Student(string name, string rollNo, string course,
        string studentClass, string contact)
```

### 5. Member Functions

The class contains functions that define what a student object can do:

* `display()`
* `update()`
* `getRollNo()`

### 6. Getter Method

`getRollNo()` provides controlled access to the private Roll Number.

### 7. STL Vector

Student objects are dynamically stored using:

```cpp
vector<Student> students;
```

This removes the fixed-size limitation of the original array-based implementation.

## Operations

### Add Student

Users can enter multiple student records, which are stored inside the vector.

### Display Students

Displays all currently stored student records.

### Search Student

Searches for a student using their Roll Number.

The program performs a linear search through the vector.

### Update Student

Finds a student using their Roll Number and allows their details to be modified.

### Delete Student

Removes the selected student from the vector using:

```cpp
students.erase(students.begin() + i);
```

## Program Flow

```text
Start
  ↓
Display Menu
  ↓
Choose Operation
  ↓
 ┌───────────────┐
 │ Add Student   │
 │ Show Students │
 │ Search        │
 │ Update        │
 │ Delete        │
 │ Exit          │
 └───────────────┘
  ↓
Perform Operation
  ↓
Return to Menu
  ↓
Exit
```

## Example

```text
========== STUDENT MANAGEMENT SYSTEM ==========

1. Enter Student Data
2. Show Student Data
3. Search Student
4. Update Student
5. Delete Student
6. Exit

Enter your choice: 1

How many students do you want to enter: 1

Enter data of student 1
Name: Krishna
Roll No: 101
Course: CSE
Class: CSE-A
Contact: 9876543210

Student Added Successfully!
```

## Technologies Used

* C++
* Object-Oriented Programming
* STL
* `vector`
* `string`
* Loops
* Conditional Statements
* `switch-case`
* Functions

## Time Complexity

| Operation        |   Complexity |
| ---------------- | -----------: |
| Add Student      | O(1) average |
| Display Students |         O(n) |
| Search Student   |         O(n) |
| Update Student   |         O(n) |
| Delete Student   |         O(n) |

Where `n` is the number of students.

## Space Complexity

**O(n)**

The vector stores all student objects dynamically.

## Learning Outcomes

This project provides practical experience with:

* Designing classes
* Creating objects
* Encapsulation
* Constructors
* Private and public members
* Member functions
* STL vectors
* Linear searching
* Vector insertion and deletion
* Menu-driven applications
* Basic CRUD operations
* Time and space complexity

## Future Improvements

Possible extensions include:

* Support names containing spaces using `getline()`
* Prevent duplicate Roll Numbers
* Sort students by name or Roll Number
* Search by name or course
* Add marks and grades
* Calculate student percentage
* Add file handling for permanent storage
* Add login/authentication
* Create a graphical interface

## Project Structure

```text
Student-Management-System/
│
├── student_management.cpp
└── README.md
```

## Author

**Krishna Sharma**

B.Tech Computer Science & Engineering (AI & ML)

Lovely Professional University

**Focus:** C++ • DSA • OOP • Python • AI/ML • Full-Stack Development
