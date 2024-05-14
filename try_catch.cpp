#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    int rollNo;
public:
      void setInput() {
        try {
            cout << "Enter student name: ";
            getline(cin, name);
            if (name.empty()) {
                throw string("Name cannot be empty");
            }

            cout << "Enter student age: ";
            cin >> age;
            if (age <= 0) {
                throw string("Age must be a positive integer");
            }
            cout << "Enter student roll number: ";
            cin >> rollNo;
            if (rollNo <= 0) {
                throw string("Roll number must be a positive integer");
            }
        } catch (const string& e) {
            cerr << "Error: " << e << endl;
            setInput();
        }
    }
    void display() {
        cout << "Student Name: " << name << std::endl;
        cout << "Student Age: " << age << std::endl;
        cout << "Student Roll Number: " << rollNo << std::endl;
    }
};
class Course {
private:
    string courseName;
    int courseCode;
public:
       void setInput() {
        try {
            cout << "Enter course name: ";
            getline(cin, courseName);
            if (courseName.empty()) {
                throw string("Course name cannot be empty");
            }
            cout << "Enter course code: ";
            cin >> courseCode;
            if (courseCode <= 0) {
                throw string("Course code must be a positive integer");
            }
        } catch (const string& e) {
            cerr << "Error: " << e << endl;
            setInput();
        }
    }
    void display() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
    }
};
int main() {
    Student student;
    student.setInput();
    student.display();
    Course course;
    course.setInput();
    course.display();
    return 0;
}