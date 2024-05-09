#include <iostream>
#include <fstream>
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
        ofstream obj("d:/a/student.txt", ios::app);
        if (obj.is_open())
        {
            obj<<name<<" "<<rollNumber<<endl;
            obj.close();
            cout<<"Student record has been stored."<<endl;
        }
        else
        {
            cout<<"Unable to open file!"<<endl;
        }
    }
};
int main() {
    Student st1("Amit", 101);
    Student st2("Raman", 102);
    Student st3("Radha", 103);
    st1.writefun();
    return 0;
}