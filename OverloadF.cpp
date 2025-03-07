//WAP to overload a function ;
#include<iostream>
using namespace std;
int FirstFunction(int a,int b){
    return a+b;

}
double SecFunction(double x,double y){
    return x+y;
}

int main(){
    int Number1=FirstFunction(10,20);
    double Number2=SecFunction(10.2,11.5);
    cout<<"Interger Addtion:"<<Number1<<endl;
    cout<<"Double Addtion:"<<Number2<<endl;
    return 0;

}