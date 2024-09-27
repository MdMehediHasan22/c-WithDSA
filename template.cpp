#include<iostream>
using namespace std;
template<class myTemplate>
myTemplate add(myTemplate a,myTemplate b){
  return a+b;
};
int main(){
    cout<<"result :"<<add(10,20)<<endl;
    cout<<"result :"<<add(10.5,20.2)<<endl;

    return 0;
}