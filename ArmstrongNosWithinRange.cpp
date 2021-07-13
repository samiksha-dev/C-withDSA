#include<iostream>
using namespace std;
int main(){
    int n,digits,temp,sum=0,i;
    for(i=1;i<=1000;i++){
                    temp=i;
            sum=0;
            int j=i;
        while(j!=0){
            digits=j%10;
            sum=sum+digits*digits*digits;
            j=j/10;
        }
        if(temp==sum){
            cout<<temp<<"\n";
        }
    }
}