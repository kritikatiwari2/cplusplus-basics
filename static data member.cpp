#include<iostream>
using namespace std;
class Customer{
 string name;
 int account_no;
 float balance;
    public:
    static int total_customer;
      Customer(string a,int b,float c){
         name=a;
        account_no=b;
        balance=c;
        total_customer++;
 }
 void display(){
    cout<<"Name:"<<name<<" "<<"Account_number:"<<account_no<<" "<<"Balance:"<<balance<<" "<<endl;
 }
 void display_total(){
    cout<<"total no of customers are:"<<total_customer<<endl;
 }
};
int Customer::total_customer=0;
int main(){
Customer A1("Aman",1,10000);
Customer A2("Rohit",2,15000);
A1.display();
A2.display();
Customer::total_customer=6;
//this will change the total count 
A2.display_total();

//we can access the static member directly as well without using object
//for that we will have to use the following way:
//Customer::total_customer=6;
return 0;
}