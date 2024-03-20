#include<iostream>
using namespace std;
class student{
private:
    string name;
    int reg;
public:
    student(string name, int reg){
        this->name = name;
        this->reg = reg;
        cout<<"\nBase class constructor invoked";
        cout<<"\nName and registration number is: "<<name<<" "<<reg;
    }
    void update_details(string new_name, int new_reg){
        name = new_name;
        reg = new_reg;
        cout<<"\nStudent details updated";
    }
    void delete_details(){
        name = "";
        reg = 0;
        cout<<"\nStudent details deleted";
    }
    void display_details(){
        cout<<"\nName: "<<name;
        cout<<"\nRegistration number: "<<reg;
    }
};
class course : public student{
private:
    int course_id;
    string course_name;
public:
    course(string name, int reg): student(name, reg){
        cout<<"\nChild class constructor invoked";
        cout<<"\nName and registration number is "<<name<<" "<<reg;
    }
    void course_info (){
        cout<<"\nEnter your course code and course name ";
        cin>>course_id>>course_name;
        cout<<"\nCourse information is\ncourse name is "<<course_name;
        cout<<"\nCourse id is "<<course_id;
    }
};
int main(){
    string name;
    int reg;
    cout<<"Enter your name and registration number ";
    cin>>name>>reg;
    course obj(name, reg);
    obj.course_info();
    obj.display_details();
    obj.update_details("New Name", 0);
    obj.display_details();
    obj.delete_details();
    return 0;
}