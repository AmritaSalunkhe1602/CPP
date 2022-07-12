#include<iostream>
using namespace std;
int main(){
    int sum=0;
    cout<<"The even Nos are:";
    for (int i=1;i<=10;i++){
        if(i%2==0){
            cout<<i<<" "<<endl;
            sum +=i;
        }
    }
    cout<<"Sum of the Even numbers is "<<sum<<endl;
    return 0;
}