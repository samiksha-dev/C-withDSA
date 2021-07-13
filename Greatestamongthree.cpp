#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c)
        cout<<"A is greatest"<<" "<<a;
        else{
            cout<<"C is greatest"<<" "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"B is greatest"<<" "<<b;
        }
        else{
            cout<<"C is greatest"<<" "<<c;
        }
    }

}