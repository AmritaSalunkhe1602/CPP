#include<iostream>
using namespace std;
int main(){
    int val;
    cout<<"Enter value stilll that you want to print odd numbers: "<<endl;
    cin>>val;
    cout<<"The odd numbers are:"<<endl;
    for(int i=1;i<=val;i++){
        if (i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}