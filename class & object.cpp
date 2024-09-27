#include<iostream>
using namespace std;

class car{
     public:
     string brand;
     int manPower;
     int totalCar;
};

int main(){
    car obj1;

    obj1.brand = "Toyota";
    obj1.manPower = 10000;
    obj1.totalCar = 50000;
  
    cout<<"Object one details---"<<endl;

    cout<<"Brand name ="<<obj1.brand<<endl;
    cout<<"Total car ="<<obj1.totalCar<<endl;
    cout<<"manPower ="<<obj1.manPower<<endl<<endl;  
    
    car obj2;

    obj2.brand = "Volvo";
    obj2.manPower = 20000;
    obj2.totalCar = 60000;
  
    cout<<"Object two details---"<<endl;

    cout<<"Brand name ="<<obj2.brand<<endl;
    cout<<"Total car ="<<obj2.totalCar<<endl;
    cout<<"manPower ="<<obj2.manPower<<endl<<endl;  
  
    car obj3;

    obj3.brand = "Tesla";
    obj3.manPower = 30000;
    obj3.totalCar = 70000;
  
    cout<<"Object three details---"<<endl;

    cout<<"Brand name ="<<obj3.brand<<endl;
    cout<<"Total car ="<<obj3.totalCar<<endl;
    cout<<"manPower ="<<obj3.manPower<<endl<<endl;  

    car obj4;

    obj4.brand = "Honda";
    obj4.manPower = 60000;
    obj4.totalCar = 100000;
  
    cout<<"Object four details---"<<endl;

    cout<<"Brand name ="<<obj4.brand<<endl;
    cout<<"Total car ="<<obj4.totalCar<<endl;
    cout<<"manPower ="<<obj4.manPower<<endl<<endl;  

    return 0;

}

