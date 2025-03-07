#include<iostream>
#include<string>
using namespace std;
class FriendFunction{
    private:
    string Name;
    int rollNo;
    public:
    FriendFunction()
    {
     cout<<"Enter Your Name:";
     cin>>Name;
     cout<<"Enter Your Roll No:";
     cin>>rollNo;

       
    }
     friend void friendFunction(FriendFunction& obj);
};
 void friendFunction(FriendFunction & obj)
{
    cout << "Name: "<< obj.Name<<endl;
    cout << "Roll No: " << obj.rollNo<<endl;
}
int main(){
    FriendFunction object;
    friendFunction (object);
    return 0;

}