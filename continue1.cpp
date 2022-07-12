#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
   
    for(int num=a;num<=b;num++){
        if(num%3==0){
            continue;
        }
        cout<<num<<endl;
    }
    
    
    
    return 0;
}