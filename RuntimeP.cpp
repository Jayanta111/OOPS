#include<iostream>
using namespace std;
class Student{
    public:
    virtual void NameDept(){
    cout<<"I am Jayanta Chungkrang \n";

    }

};
class Dept: public Student{
    public:
    virtual void NameDept(){
    cout<<"Computer Science And Engineering.\n";

    }

};
int main(){
    Student*Sptr;
    Dept D;
    Sptr=&D;
    Sptr->NameDept();
    return 0;
}