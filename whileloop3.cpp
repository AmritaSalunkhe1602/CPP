#include<iostream>
using namespace std;
int main(){
    int sum=0,i=1,val;
    cout<<"Enter the value that you want to calculate the sum "<<endl;
    cin>>val;

    while(i<=val){
        sum += i;
        i++;
    }
    cout<<"The sum of the 1 to "<<val<< " is "<<sum<<endl;
    return 0;

}