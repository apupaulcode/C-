#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,t;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    t=n;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(t==sum){
        cout<<"Entered Number is a palindrome"<<endl;
    }else{
        cout<<"Entered Number is not a palindrome"<<endl;
    }
}