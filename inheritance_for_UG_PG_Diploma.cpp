#include<iostream>
#include<string>
using namespace std;
class Course{
    protected:
    string courseCode;
    string courseName;
    int credits;
    public:
    Course(const string &code, const string &name, int credit) : courseCode(code), courseName(name), credits(credit) {}
    void displayCourseDetails() {
        cout<<"Course Code : "<<courseCode<<endl;
        cout<<"Course Name : "<<courseName<<endl;
        cout<<"Credits : "<<credits<<endl;
    }
};
class UGCourse : public Course{
    private:
    int year;
    public:
    UGCourse(const string &code, const string &name, int credit, int y) : Course(code, name, credit), year(y) {}
    void displayCourseDetails() {
        Course :: displayCourseDetails();
        cout<<"Year : "<<year<<endl;
    }
};
class PGCourse : public Course {
    private:
    string specialization;
    public:
    PGCourse(const string &code, const string &name, int credit, const string &spec) : Course(code, name, credit), specialization(spec) {}
    void displayCourseDetails() {
        Course::displayCourseDetails();
        cout<<"Specialisation : "<<specialization<<endl;
    }
};
class DiplomaCourse : public Course {
    private:
    string institution;
    public:
    DiplomaCourse(const string &code, const string &name, int credit, const string &inst) : Course(code, name, credit), institution(inst) {}
    void displayCourseDetails() {
        Course::displayCourseDetails();
        cout<<"Institution : "<<institution<<endl;
    }
};
int main() {
    UGCourse ug("COM 401", "Object Oriented Programming using C++", 5, 4);
    PGCourse pg("COM 007", "Cyber Security", 7, "Networking");
    DiplomaCourse dip("COM 301", "Data Structures", 4, "MIET");
    ug.displayCourseDetails();
    cout<<endl;
    pg.displayCourseDetails();
    cout<<endl;
    dip.displayCourseDetails();
    return 0;
}