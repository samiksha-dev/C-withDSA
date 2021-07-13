#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3 && s3==s1)
    cout<<"The triangle is equilateral triangle";
    else if(s1==s2 || s2==s3 || s3==s1)
    cout<<"The triangle is isosceles triangle";
    else
    cout<<"The triangle is scalene Triangle";
}