#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the range";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        continue;
         cout<<i<<endl;
    }
   
}