#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Divisible by both"<<endl;
    }
    else if(n%2==0){
        cout<<"Divisble by only 2"<<endl;
    }
    else if(n%3==0){
        cout<<"Divisble by only 3"<<endl;
    }
    else{
        cout<<"Divisble by none"<<endl;
    }
    return 0;
}