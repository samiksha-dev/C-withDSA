#include<iostream>
using namespace std;
int main(){
    int n,count=0,r;
    cout<<"Enter The Number";
    cin>>n;
    while(n!=0)
    {
        // r=n%10;
        n=n/10;
        count=count+1;
        

    }
    cout<<count;
    
}