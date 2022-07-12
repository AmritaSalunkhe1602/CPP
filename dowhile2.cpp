#include <iostream>
using namespace std;
int main(){
    int sum=0,val,i=1;
    cout<<"Enter the number stil you want to calculate the sum "<<endl;
    cin>>val;
    do{
        sum +=i;
        i++;
    }
    while(i<=val);
    cout<<"Sum of the 1 to "<<val<< " is "<<sum<<endl;
}