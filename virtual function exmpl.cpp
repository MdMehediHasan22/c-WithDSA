#include <iostream>
using namespace std;
class A
{
public:
    virtual void Print()
    {
        cout << "Inside Print A" << endl;
    }
    void Show()
    {
        cout << "Inside Show A" << endl;
    }
};
class B : public A
{
public:
    void Print()
    {
        cout << "Inside Print B" << endl;
    }
    void Show()
    {
        cout << "Inside Show B" << endl;
    }
};
int main()
{

    A *pa;
    B b;
    pa = &b;
    pa->Print();
    pa->Show();

    return 0;
}