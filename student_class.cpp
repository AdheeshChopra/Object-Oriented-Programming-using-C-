#include<iostream>
using namespace std;
class student
{
                private:
                    char name[20];
                    int roll;
                public:
                    student();//Constructor
                    ~student();//Destructor
                    void read();
                    void disp();
};
student :: student()
{
        cout<<"Student Details constructor called."<<endl;
}
void student :: read()
{
        cout<<"Enter the Student Name : ";
        cin>>name;
        cout<<"Enter the Student Roll no : ";
        cin>>roll;
}
void student :: disp()
{
    cout<<"The Entered Student Details are shown below :"<<endl;
        cout<<"Student Name : "<<name<<endl;
        cout<<"Roll no   is : "<<roll<<endl;
}
student :: ~student()
{
        cout<<"Student Detail is Closed.";
}
int main()
{
    student s;
    s.read();
    s.disp();
    return 0;
}