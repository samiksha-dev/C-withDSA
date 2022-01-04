#include<iostream>
using namespace std;
int main(){
int num,remainder,i=0,j,a[32];
cout<<"Enter the number";
cin>>num;
while(num!=0){
remainder=num%8;
num=num/8;
a[i]=remainder;
i++;
}
for(j=i-1;j>=0;j--){
    cout<<a[j];
}

}