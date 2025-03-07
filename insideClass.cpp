#include<iostream>
#include <string> 
using namespace std;
class Student
{

public:
string dept;
string  name ;
int rollNo;


 void studentdetails()
{
    cout<<"Enter Your name:\n";
    cin>>name;
    cout<<"Enter Your Dept:\n";
    cin>>dept;
    cout<<"Enter Your Roll No:\n";
    cin>>rollNo;
}

void displaystudentdetails()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Dept:"<<dept<<endl;

    cout<<"Roll No:"<<rollNo<<endl;

}
};
int main(){
    Student objstudent;
    objstudent.studentdetails();
    objstudent .displaystudentdetails();
    return 0;
}
