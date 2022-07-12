#include<iostream>
using namespace std;
int main(){
int savings;
cin>>savings;
if(savings>5000){
    if(savings>10000){
        cout<<"shopping rahul"<<endl;
    }else{
        cout<<"roadtrip rahul"<<endl;
    }
    
}else if(savings>2000){
    cout<<"Prem"<<endl;
}else{
    cout<<"friends"<<endl;
}
return 0;

}