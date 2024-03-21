#include <iostream>
using namespace std;
class course {
    private:
    string name;
    int course_id;
    int duration_months;
    public:
    course(const string& course_name, int id, int duration) {
        name = course_name;
        course_id = id;
        duration_months = duration;
    }
    void display_details() {
        cout<<"Course Name : " << name << endl;
        cout<<"Course ID   : " << course_id << endl;
        cout<<"Duration (in months): " << duration_months <<endl;
    }
};
int main() {
    course course1("Object Oriented Programming using C++", 411, 6);
    course1.display_details();
    return 0;
}