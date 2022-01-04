#include<iostream>
using namespace std;
int main(){
    int f=1,n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"Factorial of no"<<" "<<n<<"!"<<"is"<<" "<<f;
    
}