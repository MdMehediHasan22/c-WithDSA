#include<iostream>
#include<string.h>
using namespace std;

class tutorial{
    private:
    int id;
    string name,program;

    public:
    void input(){
        cout<<"Enter your name = ";
        getline(cin, name);

        cout<<"Enter your program = ";
        getline(cin, program);

        cout<<"Enter your id = ";
        cin>>id;
    }
    friend int display(tutorial displayObj);
};
int display(tutorial displayObj){
cout<<"My name is ="<<displayObj.name;
cout<<"\nMy program="<<displayObj.program;
cout<<"\nand my Id = "<<displayObj.id;

}
int main(){
    tutorial obj;
    obj.input();
    
    display(obj);
    return 0;
}