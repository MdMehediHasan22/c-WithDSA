#include<iostream>
using namespace std;

class Calculator{
    public:
    int choose,num1,num2,result;

    void option(){
        cout<<"Enter 1 for addition.";
        cout<<endl<<"Enter 2 for subtraction.";
        cout<<endl<<"Enter 3 for multiplication.";
        cout<<endl<<"Enter 4 for division.";
        cout<<endl<<"Enter 0 for exit.";

        cout<<endl<<endl<<"Please enter your option = ";
        cin>>choose;
    }
    
    void input(){
        cout<<endl<<"Please enter two numbers : ";
        cin>>num1>>num2;
    }

    void calculate(){
        switch (choose)
        {
        case 1:
            result = num1 + num2;
            cout<<"Addition of"<<num1<<"and"<<num2<<"is = "<<result;
            break;
        
        case 2:
            if(num1>num2){
                result = num1 - num2;
            cout<<"Subtraction of"<<num1<<"and"<<num2<<"is = "<<result;
            }
            else{
                result = num2 - num1;
            cout<<"Subtraction of"<<num2<<"and"<<num1<<"is = "<<result;
           
            }
             break;

              case 3:
            result = num1 * num2;
            cout<<"Multiplication of"<<num1<<"and"<<num2<<"is = "<<result;
            break;

             case 4:
            result = num1 / num2;
            cout<<"Division of"<<num1<<"and"<<num2<<"is = "<<result;
            break;
        default:
            break;
        }
    }
};

int main(){
    Calculator myObj;

    myObj.option();
    myObj.input();
    myObj.calculate();

    return 0;
}