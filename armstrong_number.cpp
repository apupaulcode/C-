#include<iostream>
using namespace std;
int main(){
    int n,t,r,sum=0;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    t=n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(t==sum){
        cout<<"Entered Number is a Armstrong"<<endl;
    }else{
        cout<<"Entered Number is not a Armstrong"<<endl;
    }
}