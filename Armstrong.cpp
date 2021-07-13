#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0,digits,temp;
    cin>>n;
    temp=n;
    while(n!=0){
        digits=n%10;
        sum=sum+digits*digits*digits;
        n=n/10;
    }
    if(temp==sum){
    cout<<"Armstrong No";
    }
    else{
        cout<<"Not an Armstrong No";
    }
}