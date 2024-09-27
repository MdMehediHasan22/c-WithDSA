#include<iostream>
using namespace std;
class CopyCon{
    int a,b;
   public:
    CopyCon(int x,int y){
        a=x;
        b=y;
        cout<<"\n Here is the initialization of constructor";
    }
    void Display(){
        cout<<"\nValues:\t"<<a<<"\t"<<b;
    }
};
int main(){
    CopyCon Object(30,40);
    CopyCon Object2=Object;
    Object.Display();
    Object2.Display();
    return 0;
}