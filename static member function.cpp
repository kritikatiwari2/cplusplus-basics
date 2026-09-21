#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_no;
    float balance;
    //to access these private we need static meber function
    static int total_customer;
    static int total_balance;
    public:
    Customer(string a,int b, float c){
       name=a;
       account_no=b;
       balance=c;
       total_customer++;
       total_balance+=balance;

    }
    void display(){
        cout<<"Name:"<<name<<" "<<"Acoount number:"<<account_no<<" "<<"Balance:"<<balance<<endl;
    }
    void display_total(){
        cout<<total_customer<<endl;
    }
    //static member functions
    static void accessStatic(){
        cout<<"Total customers are:"<<total_customer<<endl;
        cout<<"Total balance in bank:"<<total_balance<<endl;   
     }
     void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }

        void withdraw(int amount){
            if(amount<=balance&&amount>0){
                balance-=amount;
                total_balance-=amount;
            }
        }
     
};
    int Customer::total_customer=0;
    int Customer::total_balance=0;

int main(){
    Customer A1("Aman",1,10000);
    Customer A2("Rohit",2,15000);
     A1.deposit(600);
     A2.withdraw(2300);
    Customer::accessStatic();
    A1.display_total();
  
    return 0;
}