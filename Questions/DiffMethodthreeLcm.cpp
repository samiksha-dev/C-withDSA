#include<iostream>
using namespace std;
int main(){
    int n1,n2,lcm;
    cout<<"Enter two Nos."<<endl;
    cin>>n1>>n2;
    for(lcm=n1>n2?n1:n2;lcm<(n1*n2);lcm=lcm+(n1>n2?n1:n2)){ //since bade no se ++ kro na 
        if(lcm%n1==0 && lcm%n2==0){
            break;
        }
           }
           cout<<lcm;
}