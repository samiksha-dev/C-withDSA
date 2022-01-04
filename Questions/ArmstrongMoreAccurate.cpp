#include<iostream>
using namespace std;

int main()
{
    int i,digits,no,num,temp,count=0,sum=0;
    cout<<"Enter the no.";
    cin>>no;
    num=no;
    temp=no;
    while(no!=0){
        no=no/10;
        count++;
    }

    for(int i=count;i>=1;i--){
                digits=temp%10;
                temp=temp/10;
                sum=sum+pow(digits,i)

    }
    return 0;
}