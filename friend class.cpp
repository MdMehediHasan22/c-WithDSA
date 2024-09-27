#include<iostream>
using namespace std;

class A{
    private:
    string name;
    int id;
    public:


    friend class B;

};

class B{
    public:
      void display(A obj){
        obj.name="Mehedi";
        obj.id=101;
        cout<<obj.name<<endl;
        cout<<obj.id<<endl;
      }
};

int main(){
    A obj;
    B obj1;
    obj1.display(obj);
    return 0;
}