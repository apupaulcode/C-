#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swaping"<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;

}