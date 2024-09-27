#include<iostream>
using namespace std;

class Circle{
    double radius;
    public:
    Circle(double r){
        radius = r;
    }
    Circle(Circle &otherCircle )
    {
       radius = otherCircle.radius;
    }
    double getArea(){
        return 3.1316*radius*radius;
    }

};
int main(){
     Circle circle1(5);
     Circle circle2=circle1;

     cout<<"Radius of circle2: "<<circle2.getArea()<<endl;

    return 0;
}