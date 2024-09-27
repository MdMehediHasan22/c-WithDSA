#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    A(int a){
        this->x=a;
    }
};
class B : protected A{
    protected:
    int y;
    public:
    B(int a,int b)
    :A(a){
        
        this->y=b;
    }
};
class C : private B{
    protected: 
    int z;
    public:
    C(int a,int b,int c)
    :B(a,b){
        this->z=c;
    }
    double CheckTriangle(){
        if(x+y+z==180 && x>0 && y>0 && z>0)
        {
            cout<<"THis is a valid Triangle"<<endl;
        }
        else{
            cout<<"not valid"<<endl;
        }
    }
} ;
int main(){
    int a,b,c;
    cout<<"Enter the triangle angles:"<<endl;
    cin >> a >> b >> c;
    C cx(a,b,c);
    cx.CheckTriangle();
    return 0;
}