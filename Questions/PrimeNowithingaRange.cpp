#include<iostream>
using namespace std;
int main(){
    int a,b,i,num;
    cout<<"Enter the Range";
    cin>>a>>b;
    for(num=a;num<b;num++)
    {
        for(i=2;i<(num);i++) //sice agr 
        {
        if(num%i==0)
        break;
        }

    
    if(i==num)
    cout<<num<<endl;
    }
}