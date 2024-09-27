#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
}
int sum(int num1,int num2){
    print(num1);
    print(num2);
    return num1+num2;
}
int main(){
     int a,b;
     cin>>a>>b;
     cout<<sum(a,b)<<endl;
}