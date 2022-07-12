#include<iostream>
using namespace std;
int main(){
   int n,fact=1;
   cout<<"Enter number that you wnt to calculate factorial:"<<endl;
   cin>>n;
   if(n<0){
      cout<<"we cannot find factorial of negative number";
   }
   else if(n<=1){
      cout<<"factorial of "<<n<< " is "<<fact<<endl;
   }else{
      for(int i=2;i<=n;i++){
       fact=i*fact;
      }cout<<"The factorials of "<<n<< " is " <<fact<<endl;
   }
     return 0;
}