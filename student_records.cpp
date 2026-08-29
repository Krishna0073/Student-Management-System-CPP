#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string rollNo;
    string course;
    string studentClass;
    string contact;

public:

    Student(string name, string rollNo, string course,
            string studentClass, string contact)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->course = course;
        this->studentClass = studentClass;
        this->contact = contact;
    }

    string getRollNo()
    {
        return rollNo;
    }

    void display()
    {
        cout << "\nName    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Course  : " << course << endl;
        cout << "Class   : " << studentClass << endl;
        cout << "Contact : " << contact << endl;
    }

    void update()
    {
        cout << "\nEnter New Details\n";

        cout << "Name: ";
        cin >> name;

        cout << "Roll No: ";
        cin >> rollNo;

        cout << "Course: ";
        cin >> course;

        cout << "Class: ";
        cin >> studentClass;

        cout << "Contact: ";
        cin >> contact;

        cout << "\nRecord Updated Successfully!" << endl;
    }
};


vector<Student> students;


void enterData()
{
    int choice;

    cout << "\nHow many students do you want to enter: ";
    cin >> choice;

    if (choice <= 0)
    {
        cout << "\nInvalid number of students!" << endl;
        return;
    }

    for (int i = 0; i < choice; i++)
    {
        string name;
        string rollNo;
        string course;
        string studentClass;
        string contact;

        cout << "\nEnter data of student " << i + 1 << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Roll No: ";
        cin >> rollNo;

        cout << "Course: ";
        cin >> course;

        cout << "Class: ";
        cin >> studentClass;

        cout << "Contact: ";
        cin >> contact;

        students.push_back(
            Student(name, rollNo, course, studentClass, contact)
        );

        cout << "\nStudent Added Successfully!" << endl;
    }
}


void showData()
{
    if (students.empty())
    {
        cout << "\nNo record found!" << endl;
        return;
    }

    cout << "\n=========== Student Records ===========\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\nData of Student " << i + 1 << endl;

        students[i].display();

        cout << "--------------------------------------" << endl;
    }
}


void searchData()
{
    if (students.empty())
    {
        cout << "\nNo record found!" << endl;
        return;
    }

    string roll;
    bool found = false;

    cout << "\nEnter Roll Number to search: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getRollNo() == roll)
        {
            cout << "\nStudent Record Found\n";

            students[i].display();

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nRecord not found!" << endl;
    }
}


void updateData()
{
    if (students.empty())
    {
        cout << "\nNo record found!" << endl;
        return;
    }

    string roll;
    bool found = false;

    cout << "\nEnter Roll Number of student to update: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getRollNo() == roll)
        {
            students[i].update();

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nRecord not found!" << endl;
    }
}


void deleteData()
{
    if (students.empty())
    {
        cout << "\nNo record found!" << endl;
        return;
    }

    string roll;
    bool found = false;

    cout << "\nEnter Roll Number of student to delete: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getRollNo() == roll)
        {
            students.erase(students.begin() + i);

            cout << "\nRecord Deleted Successfully!" << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nRecord not found!" << endl;
    }
}


int main()
{
    int value;

    while (true)
    {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";

        cout << "1. Enter Student Data" << endl;
        cout << "2. Show Student Data" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> value;

        switch (value)
        {
            case 1:
                enterData();
                break;

            case 2:
                showData();
                break;

            case 3:
                searchData();
                break;

            case 4:
                updateData();
                break;

            case 5:
                deleteData();
                break;

            case 6:
                cout << "\nThank you for using Student Management System!" << endl;
                return 0;

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    }

    return 0;
}
