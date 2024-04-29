#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Number is not a prime"<<endl;
            break;
        }
    }
    cout<<"Number is a prime";
}