#include<iostream>
using namespace std;

class Base{
    public:
         int x;
         static int y;
         void setData(){
            cout<<"Enter the number"<<endl;
            cin>>x;
         }
         void getData(){
            cout<<x<<endl;
         }

};
int Base ::y;
int main(){
    Base b1 ,  b2;
    b1.setData();
    b1.getData();
    b1.y=20;
    b2.y=40;
    cout<<b1.y<<endl;
    return 0;
}
