#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
    int id;
    string name;
    float salary;
    Employee(int id,string name, float salary){
        this->id=id;
        this->name=name;
        this-> salary=salary;
    }
    void display(){
cout<<"ID:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Salary:"<<salary<<endl;

    }
};
int main()
{
    Employee E1=Employee(10,"Jayanta",10000.00);
    Employee E2=Employee(10,"Jayanta",10000.00);
    E1.display();
    E2.display();
return 0;
}
