#include <iostream>
#include <string>
using namespace std;
#include<iostream>
using namespace std;
class Person{
      private:
       int nid;
       string name;
       public:
       Person(int nid,string name){
        this->nid = nid;
        this->name = name;
       }
       void Display1(){
        cout<<"Nid :"<<nid<<endl;
        cout<<"Name :"<<name<<endl;
       }
};
class Student : public Person{
    string dept;
    public:
    Student(int nid,string name,string dept)
        :Person(nid,name){
        this->dept = dept;
        }
        void Display(){
            Display1();
            cout<<"Dept :"<<dept<<endl;
        }
    
};
int main(){
    Student s(100,"john","CSE");
    s.Display();
    return 0;
}