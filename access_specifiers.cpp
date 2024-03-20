#include<iostream>
using namespace std;
class student {
    public:
    student(string name, int reg) {
        cout<<"\nBase class constructor invoked";
        cout<<"\nName and registration number is: "<<name<<reg;
    }
};
class course : public student {
    private: int course_id;
    string course_name;
    public:
    course(string name, int reg): student(name, reg) {
        cout<<"\nChild class constructor invoked";
        cout<<"\nName and registration number is "<<name<<reg;
    }
    public:
    void course_info () {
        cout<<"\nEnter your course code and course name ";
        cin>>course_id>>course_name;
        cout<<"\nCourse information is\ncourse name is "<<course_name;
        cout<<"\nCourse id is "<<course_id;
    }
};
int main() {
    string name;
    int reg;
    cout<<"Enter your name and registration number ";
    cin>>name>>reg;
    course obj(name, reg);
    obj.course_info();
    return 0;
}