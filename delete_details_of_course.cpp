#include<iostream>
#include<string>
using namespace std;
class Course{
    private:
    string courseCode;
    string courseName;
    int credits;
    public:
    Course(const string &code,  const string &name, int credit) : courseCode(code), courseName(name), credits(credit) {}
    void deleteCourseDetails() {
        courseCode.clear();
        courseName.clear();
        credits = 0;
        cout<<"Course Details Deleted."<<endl;
    }
    void displayCourseDetails(){
        cout<<"Course Code : "<<courseCode<<endl;
        cout<<"Course Name : "<<courseName<<endl;
        cout<<"Credits : "<<credits<<endl;
    }
};
int main(){
    Course c1("COM 401", "Object Oriented Programming using C++", 5);
    c1.displayCourseDetails();
    c1.deleteCourseDetails();
    c1.displayCourseDetails();
    return 0;
}