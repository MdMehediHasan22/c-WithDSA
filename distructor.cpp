#include<iostream>
using namespace std;

class MyFirstClass{
   public:
   MyFirstClass();
   ~MyFirstClass();
   void display();
};
MyFirstClass :: MyFirstClass(){
    cout<<"I am a contructor"<<endl;
}
MyFirstClass :: ~MyFirstClass(){
    cout<<"I am a distructor"<<endl;
}
void MyFirstClass :: display(){
    cout<<"display is called"<<endl;
}
int main(){
    MyFirstClass ob1;
    ob1.display();
    
    return 0;
}