#include<iostream>
using namespace std;
class lecture{
    public:
    int num1,num2;

    void input(){
        cout<<"Enter two numbers = ";
        cin>>num1>>num2;
    }
    void calculate(){
        int result = num1+num2;
        cout<<"Sum = "<<result;
    }
};

int main(){
    lecture myObj;
    myObj.input();
    myObj.calculate();

    return 0;
}