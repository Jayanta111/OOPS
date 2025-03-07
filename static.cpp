#include <iostream>
#include<string>
using namespace std;
class StaticMember{
    private:
    static int rollNo;
    static string name;
    static string dept;
    public:
    static void getdata(){
        cout<<"Enter Your Name:";
        cin>>name;
        cout<<"Enter Your Roll No:";
        cin>>rollNo;
        cout<<"Enter Your Department:";
        cin>>dept;
    }
    static void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<rollNo<<endl;
        cout<<"Department:"<<dept<<endl;
    }


};
int StaticMember::rollNo;
string StaticMember::name;
string StaticMember::dept;

int main(){
   StaticMember::getdata();  // Call static method using class name
    StaticMember::display();
    return 0;
}