#include<iostream>
using namespace std;
int main(){
    int i=8,count;
    for(int j=2;j<i;j++){
        if(i%j==0){
            count++;

        }
    }if(count==0){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}