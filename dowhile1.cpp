#include<iostream>
using namespace std;
int main(){
    int sum=0,i=1;
    do{
        sum +=i;
        i++;
    }
    while(i<=10);
    cout<<"sum of the 1 to 10 numbers is "<<sum<<endl;
    return 0;
}