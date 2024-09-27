#include<iostream>
using namespace std;
class MobileUser{
    public:
    virtual void sendMessage()=0;
};

class Rahim : public MobileUser{
       void sendMessage(){
        cout<<"Hi! This is Rahim"<<endl;
       }
};
class Karim : public MobileUser{
       void sendMessage(){
        cout<<"Hi! This is Karim"<<endl;
       }
};

int main(){
    MobileUser *m;

    Rahim r;
    Karim k;

    m=&r;
    m->sendMessage();
    
    m=&k;
    m->sendMessage();

    return 0;
}