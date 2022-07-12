#include<iostream>
using namespace std;
int main(){
   int val,sum=0;
   cout<<"Enter the value till want to calculate the  sum "<<endl;
   cin>>val;

   for(int i=1;i<=val;i++){
       sum +=i;
   }
   cout<<"sum of the 1 to "<<val<< " is "<<sum<<endl;
   return 0;
}