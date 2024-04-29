#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter a digit"<<endl;
    cin>>n;
    while(n!=0){
        i=n%10;
        sum=sum*10+i;
        n=n/10;
    }
    cout<<"The reversed number is "<<sum;
}