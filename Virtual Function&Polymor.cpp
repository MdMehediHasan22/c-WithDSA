#include <iostream>
using namespace std;

class A
{
public:
    virtual void Print()
    {
        cout << "Inside A" << endl;
    }
};
class B : public A
{
public:
    void Print()
    {
        cout << "Inside B" << endl;
    }
};
int main(void)
{
    A *pa;
    A a;
    pa = &a;
    pa->Print();
    B b;
    pa = &b;
    pa->Print();
    return 0;
}