#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter n "<<endl;
    cin>>n;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<"sum of the first  "<<n<<" number is "<<sum<<endl;
    return 0;
}