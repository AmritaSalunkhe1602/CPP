#include<iostream>
using namespace std;
int main(){
    
    cout<<"The odd numbers are: ";
    for(int i=1;i<=10;i++){
        if(i%2!=0){
            cout<<i<< " "<<endl;
        }
    }
    return 0;
}