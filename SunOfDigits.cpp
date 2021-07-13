#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r;
    cout<<"Enter The Number";
    cin>>n;
    while(n!=0)
    {
      r=n%10;

        n=n/10;

        sum=sum+r;
        

    }
    cout<<sum;
    
}