#include<iostream>
using namespace std;
class Book{
    public:
     void displayTitle(){
         cout<<"This is Super Class"<<endl;
     }
};
class fiction:public Book{

};
class nonFiction:public Book{

};
class Library : public fiction,public nonFiction{
    public:
   void displayBookTitle(){
    fiction::displayTitle();
    nonFiction::displayTitle();
   }

};
int main(){
    Library obj;
    obj.displayBookTitle();
    return 0;
}