#include<iostream>
#include<cmath>
using namespace std;
int isArmstrong(int i){
    int n=i,lastdigit,sum=0;
    while(i!=0){
        lastdigit=i%10;
        sum+=pow(lastdigit,3);
        i=i/10;
    }if(sum==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    for(int j=1;j<=500;j++){
        if(isArmstrong(j)==1){
            cout<<j<<" ";
        }
    }
    return 0;
}