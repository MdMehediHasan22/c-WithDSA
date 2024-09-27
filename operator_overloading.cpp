#include<iostream>
using namespace std;
class Impedance{
     private:
      double real;
      double imag;
      public:
      Impedance(double r,double i){
        this->imag=i;
        this->real=r;
      }
      Impedance operator +(Impedance const &obj){
        double newReal = real+obj.real;
        double newImag = imag+obj.imag;
        return Impedance(newReal,newImag);
      }
      void print(){
        cout<<real<<"+j"<<imag<<endl;
      }
};
int main(){
    Impedance Z1(3,4);
    Impedance Z2(5,-2);
    Impedance Z3(0,6);
    Impedance Z=Z1+Z2+Z3;
    Z.print();
    return 0;
}