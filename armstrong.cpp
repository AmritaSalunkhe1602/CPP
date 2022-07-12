#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,lastdigit,original,sum=0;
   
    cout<<"enter any number:"<<endl;
    cin>>n;
    original=n;
    while(n>0){
        lastdigit=n%10;
        sum+=pow(lastdigit,3);
         n=n/10;
        
       
    }if(sum==original){
        cout<<"armstrong"<<endl;
        }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}