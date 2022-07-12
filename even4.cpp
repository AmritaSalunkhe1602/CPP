#include<iostream>
using namespace std;
int main(){
    int val;
    cout<<"Enter the value that sitll you want to print even nos :"<<endl;
    cin>>val;
    cout<<"Even numbers are :";
    for(int i=1;i<=val;i++){
        if (i%2==0){
            cout<<i<< " ";
        }
    }
    return 0;
}