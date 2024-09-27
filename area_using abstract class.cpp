#include<iostream>
using namespace std;
class Shape{
    public:
    virtual double area()=0;

    void displayArea(){
    cout<<"Area  "<<area()<<endl;
    }
};
class Rectangle: public Shape{
     private:
     double length,width;
     public:
     Rectangle(double l,double w){
        this->length=l;
        this->width=w;
     }
     double area(){
        return length*width;
     }
};
class Circle: public Shape{
    private:
    double radius;
    public:
    Circle(double r){
        this->radius=r;
    }
    double area(){
        return 3.1416*radius*radius;
    }
};
int main(){
    Rectangle rect(10,12);
    rect.displayArea();

    Circle circle(3);
    circle.displayArea();  
    return 0;
}