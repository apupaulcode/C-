#include<iostream>
using namespace std;
int main(){
    int r,n,sum=0;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"Sum is "<<sum;
}