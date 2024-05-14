#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Student {
    string name;
    int rollNumber;
};
template<typename T>
int searchByName(const vector<T>& students, const string& name) {
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].name == name) {
            return i;
        }
    }
    return -1;
}
template<typename T>
int searchByRollNumber(const vector<T>& students, int rollNumber) {
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].rollNumber == rollNumber) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<Student> students = {
        {"Alice", 101},
        {"Bob", 102},
        {"Charlie", 103},
        {"David", 104}
    };
   string nameToSearch = "Bob";
    int indexByName = searchByName(students, nameToSearch);
    if (indexByName != -1) {
        std::cout << "Student with name " << nameToSearch << " found at index " << indexByName << endl;
    } else {
      cout << "Student with name " << nameToSearch << " not found" << endl;
    }
    int rollNumberToSearch = 103;
    int indexByRollNumber = searchByRollNumber(students, rollNumberToSearch);
    if (indexByRollNumber != -1) {
       cout << "Student with roll number " << rollNumberToSearch << " found at index " << indexByRollNumber <<endl;
    } else {
      cout << "Student with roll number " << rollNumberToSearch << " not found" <<endl;
    }
    return 0;
}