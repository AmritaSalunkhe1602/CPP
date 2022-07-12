#include<iostream>
using namespace std;
int isPallindrome(int n){
    int n1=n,rev=0;
    
   
        while(n!=0){
            rev=(rev*10)+(n%10);
            n=n/10;
        }
    if(rev==n1)
        return 1;
    else
    return 0;
}
int main(){
    int j;
    for(j=1;j<=100;j++){
        if(isPallindrome(j)==1)
        cout<<j<<" ";
    }
    return 0;
}