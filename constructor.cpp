#include<iostream>
using namespace std;

class input{
    public:
    int x,y;
       input(){
        cout<<"Enter two numbers =  "<<endl;
        cin>>x>>y;
       }
       void display()
       {
        cout<<"Sum of two numbers = "<<x+y;
       }
};
int main()
{
    input myObj;
    myObj.display();
    return 0;
}