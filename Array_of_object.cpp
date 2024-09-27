#include<iostream>
using namespace std;

class A{
    public:
    void print(){
        cout<<"Md Fuadul Islam Redoy"<<endl;

    }
};
int main(){
    A obj[3];
    for(int i=0;i<3;i++){
        obj[i].print();

    }
    return 0;
}