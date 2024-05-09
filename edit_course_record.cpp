#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class Course {
private:
    string Cname;
    int Ccode;
public:
    Course(string n, int code) {
        Cname=n;
         Ccode=code;
    }
void writefun() {
        ofstream file("e:/n/Course.txt", ios::app);
        if (file.is_open()) {
            file << Cname << " " << Ccode << endl;
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
                int Ccode;
                stringstream ss(line);
                ss >> Cname >> Ccode;
                if (Ccode == code) {
                    cout << "Course found: " << Cname << " (Course Code. " << Ccode << ")" << endl;
                  ofstream ob("e:/n/Course.txt");
                
                Cname="Java"  ;
                Ccode=20001;
               ob<< Cname <<"  "<<Ccode;
                cout<<"Record Updated";
                                        found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Course with course code " << Ccode << " not found." << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
};
int main() {
        Course obj("c++", 10001);
    obj.writefun();
    obj.searchRecord(10001); 
   return 0;
}