 #include <iostream>
 #include<cmath>
 using namespace std;
 int main()
 {
    int n,remainder;
    int binary[32];
    int i=0;
    cin>>n;
   while(n>0){
    remainder=n%2;
    binary[i]=remainder;
   
    n=n/2;
     i++;
   } cout<<"Binary=";
   for(int j=i-1;j>=0;j--)
   {
    cout<<binary[j];  
   }
   return 0;
}
 