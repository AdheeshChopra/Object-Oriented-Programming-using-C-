#include<iostream>
using namespace std;
class course {
    private:
    string name;
    int course_id;
    int duration_in_months;
    public:
    course(const string& course_name, int id, int duration) {
        name = course_name;
        course_id = id;
        duration_in_months = duration;
    }
    void updateName(const string& newName) {
        name = newName;
    }
    void updateId(int newId) {
        course_id = newId;
    }
    void updateDuration(int newDuration) {
        duration_in_months = newDuration;
    }
    void displayDetails() {
        cout<<"Course Name: "<<name<<endl;
        cout<<"Course ID: "<<course_id<<endl;
        cout<<"Duration in Months: "<<duration_in_months<<endl;
    }
};
int main() {
    course course1("C++ programming", 411, 6);
    cout<<"Initial Course Details: "<<endl;
    course1.displayDetails();
    cout<<endl;
    course1.updateName("Object Oriented Programming sing C++");
    course1.updateId(401);
    course1.updateDuration(8);
    cout<<"Updated Course Details: "<<endl;
    course1.displayDetails();
    return 0;
}