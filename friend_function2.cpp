#include<iostream>
#include<string.h>
using namespace std;

class tutorial{
    private:
    int x,y,sum;

    public:
    void input(){
        cout<<"Enter two numbers = ";
        cin>>x>>y;
    }
    int display(int res){
        cout<<"Sum = "<<res;
    }
    friend int cal(tutorial calObj);
};
int cal(tutorial calObj){
    calObj.sum=calObj.x+calObj.y;
    return calObj.sum;
}

   int main(){
    tutorial obj;
    obj.input();

    int output = cal(obj);

    obj.display(output);

    return 0;
   }