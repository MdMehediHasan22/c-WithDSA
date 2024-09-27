#include<iostream>
using namespace std;

int sum(int a,int b);
int main(){
    
    int num1,num2;
    cout<<"The value of num1 ="<<endl;
    cin>>num1;
    cout<<"The value of num2 ="<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
}
int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}