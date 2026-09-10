#include<iostream>
using namespace std;
class Students {
      string name;
        int roll;
        float marks;
    public:
    Students(){
        
        cout<<"enter the name ,roll and marks of the student:"<<endl;
        cin>> name>> roll >>marks;
    }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main(){
    Students s;
    s.display();
return 0;
}