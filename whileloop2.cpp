#include<iostream>
using namespace std;
int main(){
    int sum=0, i=1;
    while(i<=10){
        sum +=i;//same as sum=sum+i
        i++;
    }
    cout<<"sum of the 1 to 10 number is "<<sum<<endl;
    return 0;
}