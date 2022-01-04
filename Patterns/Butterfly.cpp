#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter no of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++){
    }
    for(int i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}