#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Course {
private:
    string Cname;
    int Coursecode;
public:
    Course(string n, int code) {
        Cname=n;
         Coursecode=code;
    }
void writefun() {
        ofstream obj("d:/a/Course.txt", ios::app);
        if (obj.is_open()) {
            obj << Cname << " " << Coursecode << endl;
            obj.close();
            cout << "Course record has been stored." << endl;
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
};
int main() {
    Course st1("C++",1001);
    st1.writefun();
    return 0;
}