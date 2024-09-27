#include<iostream>
#include<string.h>
using namespace std;

class tutorial{
    private:
    string myName =" Mehedi Hasan Mithu";
    
    friend void display(tutorial &displayObj);

};
 void display(tutorial &displayObj)
   {   
        displayObj.myName;
        cout<<"My name is "<<displayObj.myName;
   }

   int main(){
    tutorial obj;
    display(obj);
    return 0;
   }