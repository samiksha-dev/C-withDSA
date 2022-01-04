#include<iostream>
using namespace std;
int main(){
int num,remainder,i=0,j,a[100];
cout<<"Enter the number";
cin>>num;
while(num!=0){
remainder=num%16;
num=num/16;
a[i]=remainder;
i++;
}
for(j=i-1;j>=0;j--){
    if(a[j]<10){
    cout<<a[j] ;
    }
    else{
        cout<<(char)('A'+a[j]-10);
    }


}
}