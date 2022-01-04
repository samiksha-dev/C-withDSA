#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int flag=0,n,i;
    cout<<"enter the no";
    cin>>n;
for(i=2;i<=sqrt(n);i++){
    if(n%i==0){
        cout<<"Non-prime";
        flag=1;
        break;
    }
}
if(flag==0){
    cout<<"No is prime";
}
}
