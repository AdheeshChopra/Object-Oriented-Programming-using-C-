#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
public:
    Student(string n, int roll) {
        name=n;
        rollNumber=roll;
    }
void writefun() {
        ofstream file("e:/n/student.txt", ios::app);
        if (file.is_open())
        {
            file << name << " " << rollNumber << endl;
            file.close();
            cout << "Student record has been stored." << endl;
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
     void searchRecord(int roll) {
        ifstream file("e:/n/student.txt");
        if (file.is_open()) {
            string line;
            bool found = false;
            while (getline(file,line)) {
                string name;
                int rollNumber;
                stringstream ss(line);
                ss >> name >> rollNumber;
                if (rollNumber == roll) {
                    cout << "Student found: " << name << " (Roll No. " << rollNumber << ")" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student with roll number " << roll << " not found." << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
};
int main() {
    Student st1("Amit",101);
    st1.writefun();
    st1.searchRecord(101); 
   return 0;
}