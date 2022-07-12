#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n%2!=0){
        cout<<"The entered number is odd";
    }else{
        cout<<"The entered number is even";
    }
    return 0;
}