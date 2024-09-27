#include<iostream>
#include<string>
using namespace std;

class Customer{
    private:
      int customerId;
      string name;
      string address;
      string mobileNumber;
      int dataUsed;

    public:
       Customer(int id,string n,string addr,string mob){
        customerId = id;
        name = n;
        address = addr;
        mobileNumber=mob;
        dataUsed = 0;
       }
    void updateDataUsage(int newData){
        dataUsed += newData;
      }
    double calculateBill(){
        double costPerKB = 1.5;
        return dataUsed*costPerKB;
    }

    void displayBill(){
        cout<<"**** BILL ****"<<endl;
        cout<<"CustomerID :"<<customerId<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"DataUsed :"<<dataUsed<<endl;
        cout<<"Amount: Tk. "<<calculateBill()<<endl;
        cout<<"ABC Global Company" << endl<<endl;
    }

};
int main(){
    //Registering customers
    Customer customer1(1,"Mehedi","Rajshahi","01786949509");
    Customer customer2(2,"Mahfuj","Rajshahi","01786949510");
    
    customer1.updateDataUsage(8);
    customer2.updateDataUsage(15);

    customer1.displayBill();
    customer2.displayBill();

    double totalEarnings = customer1.calculateBill()+customer2.calculateBill();
    cout<<"TotalEarnings of the Company : Tk. "<<totalEarnings<<endl;

    return 0;
}