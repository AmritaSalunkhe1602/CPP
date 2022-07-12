#include<iostream>
using namespace std;
int main(){
    int sum=0;
    cout<<"The odd numbers are: "<<endl;
    for(int i=1;i<=10;i++){
        if(i%2!=0){
            cout<<i<<endl;
            sum +=i;
        }
    }
    cout<<"The sum of the odd numbers is: "<<sum<<endl;
    return 0;
}