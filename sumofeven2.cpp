#include<iostream>
using namespace std;
int main(){
     int val,sum=0;
     cout<<"Enter the no still that you want to print even numbers :"<<endl;
     cin>>val;
     cout<<"The even numbers are :";
     for(int i=1;i<=val;i++){
         if(i%2==0){
             cout<<i<<" "<<endl;
             sum +=i;
         }
     }
     cout<<"Sum of the even numbers is :"<<sum<<endl;
     return 0;
}