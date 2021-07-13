#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character";
    cin>>ch;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    cout<<"Entered character is a vowel";
    else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    cout<<"Entered character is a vowel";
    else
    cout<<"It is not a vowel";
}