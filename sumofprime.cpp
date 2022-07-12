#include<iostream>
using namespace std;
int main(){
    int i,j,count,sum=0;
    for(i=2;i<=10;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
                
            }
        }if(count==2){
            cout<<i<< " "<<endl;
            sum +=i;
        }
    }cout<<"Sum of prime numbers "<<sum<<endl;
    return 0;
}