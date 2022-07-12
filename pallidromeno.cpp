#include<iostream>
using namespace std;
int main(){
    int i,original,rev=0;
 cout<<"enter any number:"<<endl;
 cin>>i;
 original=i;
 while(i>0){
     rev=(rev*10)+(i%10);
     i=i/10;
 }
 if(original==rev){
     cout<<"Pallindrome"<<endl;
 }else{
     cout<<"not pallindrome"<<endl;
 }
return 0;
}