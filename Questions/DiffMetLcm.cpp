#include<iostream>
using namespace std;
int main(){
    int n1,n2,lcm;
    cout<<"Enter two Nos."<<endl;
    cin>>n1>>n2;
    for(lcm=n1>n2?n1:n2;lcm<(n1*n2);lcm++){ //since bade no se to chota lcm nhi aega na
        if(lcm%n1==0 && lcm%n2==0){
            break;
        }
           }
           cout<<lcm;
}