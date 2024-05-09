#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class Course {
private:
    string Cname;
    int coursecode;
public:
    Course(string n, int code) {
        Cname=n;
         coursecode=code;
    }
void writefun() {
        ofstream file("e:/n/Course.txt", ios::app);
        if (file.is_open()) {
            file << Cname << " " << coursecode << endl;
            file.close();
            cout << "Course record has been stored." << endl;
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
     void searchRecord(int code) {
        ifstream file("e:/n/Course.txt");
        if (file.is_open()) {
            string line;
            bool found = false;
            while (getline(file,line)) {
                string Cname;
                int coursecode;
                stringstream ss(line);
                ss >> Cname >> coursecode;
                if (coursecode == code) {
                    cout << "Course found: " << Cname << " (Course Code. " << coursecode << ")" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Course with Course code " << code << " not found." << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
};
int main() {
        Course obj("C++",1002);
    obj.writefun();
    obj.searchRecord(1002); 
   return 0;
}