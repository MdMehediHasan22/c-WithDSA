#include<iostream>
using namespace std;


class Vehicle{
      public:
        Vehicle(){
            cout<<"This is a Vehicle"<<endl;
        }

};

class Car:public Vehicle{
      public:
         Car()
         {
            cout<<"This is a Car"<<endl;
         }
};

class Fare:public Vehicle{
        public:
          Fare(){
            cout<<"Fare of Vehicle"<<endl;
          }
};

class Bus:public Car, public Fare{

};

int main(){

    Bus obj;
    return 0;
}