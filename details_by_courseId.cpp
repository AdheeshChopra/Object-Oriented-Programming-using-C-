#include <iostream>
#include <string>
#include <map>
using namespace std;
class Course {
private:
    int id;
    string name;
public:
    Course(int id, const string& name) : id(id), name(name) {}
    void printDetails() const {
        cout<<"Course ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
    int getId() const {
        return id;
    }
};
int main() {
    Course c1(401, "Object Oriented Programming using C++");
    Course c2(411, "Object Oriented Programming using C++ Lab");
    map<int, Course> courses;
    courses.insert({c1.getId(), c1});
    courses.insert({c2.getId(), c2});
    int courseId;
    cout<<"Enter the course ID: ";
    cin>>courseId;
    auto it = courses.find(courseId);
    if (it != courses.end()) {
        it->second.printDetails();
    } else {
        cout<<"Course with ID "<<courseId<<" not found."<<endl;
    }
    return 0;
}