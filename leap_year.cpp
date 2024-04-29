#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enetr year: "<<endl;
    cin>>y;
    if(y%400==0 && y%100==0 && y%4==0){
        cout<<"The year is a leap year"<<endl;
    }else{
        cout<<"The year is not a leap year"<<endl;
    }
}