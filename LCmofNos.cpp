#include<iostream>
using namespace std;
int main(){
    int n1,n2,lcm;
    cout<<"Enter two Nos."<<endl;
    cin>>n1>>n2;
    for(lcm=1;lcm<(n1*n2);lcm++){
        if(lcm%n1==0 && lcm%n2==0){
            break;
        }
           }
           cout<<lcm;
}