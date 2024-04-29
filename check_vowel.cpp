#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character "<<endl;
    cin>>c;
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        cout<<"The character you have entered is a vowel"<<endl;
    }else{
        cout<<"The character you have entered is a consonent"<<endl;
    }
}