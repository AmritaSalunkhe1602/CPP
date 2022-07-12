#include<iostream>
using namespace std;
int main(){
    int i,j=1,count=0;
    cout<<"Enter any number: "<<endl;
    cin>>i;
    while(j<=i){
        if(i%j==0)
            count++;
            j++;
        
    }
    if(count==2){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}