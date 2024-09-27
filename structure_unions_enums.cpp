#include<iostream>
using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){

    ep harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=12000000;

    cout<<"The value of harry.eId is ="<<harry.eId<<endl;
    cout<<"The value of harry.favChar is ="<<harry.favChar<<endl;
    cout<<"The value of harry.salary is ="<<harry.salary<<endl;

    union money m1;
        m1.rice = 34;
        cout<<m1.rice<<endl;

    enum Meal{ breakfast, lunch, dinner};
    Meal m2 = lunch;
    cout<<m2;    
    
    return 0;
}