#include<iostream>
using namespace std;
class course
{
	private: char CourseName[20];
	  	int CourseCode;
	public: course(); //Constructor
		~course(); //Destructor
		void read();
		void disp();
};
course :: course()
{
	cout<<"Course class constructor called."<<endl;
}
void course :: read()
{
	cout<<"Enter the course name: ";
	cin>>CourseName;
	cout<<"Enter the  course code: ";
	cin>>CourseCode;
}
void course :: disp()
{
	cout<<"Course details"<<endl;
	cout<<"Course Name :"<<CourseName<<endl;
	cout<<"Course Code is :"<<CourseCode<<endl;
}
course :: ~course()
{
	cout<<"Course class destructor called.";
}
int main()
{
	course c;
	c.read();
	c.disp();
    return 0;
}