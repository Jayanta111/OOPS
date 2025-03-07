#include<iostream>
using namespace std;
class Unary{
    private:
    int num;
    int incre;
    int decre;

    public:
    void getdata(){
    cout<<"Enter any number for Increament and Decreament using Unary :";
    cin>>num;
    }
 void displaydata(){
    incre=++num;
    cout<<incre<<""<<endl;
 }

 void displaydata1(){
    decre=--num;
    cout<<decre<<""<<endl;
 }
};
int main(){
    Unary obj;
    obj.getdata();
    cout<<"After Increment:"<<endl;;
    obj.displaydata();
    cout<<"After Decrement:"<<endl;;
    obj.displaydata1();

    return 0;

}