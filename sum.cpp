#include<iostream>
using namespace std;
class A{
  public:

  int Sum(int a,int b){
    return a+b;
  }
  double Sum(int a,double b,int c){
    return a+b+c;
  }
  int Sum(int a,int b,int c){
    return a+b+c;
  }
};
int main(){
    A a;
    cout<<a.Sum(3,4)<<endl;
    cout<<a.Sum(5,4,6)<<endl;
    cout<<a.Sum(5,4,6)<<endl;
    return 0;
}