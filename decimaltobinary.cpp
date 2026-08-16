 #include <iostream>
 #include<cmath>
 using namespace std;
 int main()
 {
    int n,remainder;
    int binary=0;
    int i=0;
    cin>>n;
   while(n>0){
    remainder=n%2;
cout<<remainder;
n=n/2;
binary=binary+remainder*pow(10,i++);
   }
cout<<binary;
}
 