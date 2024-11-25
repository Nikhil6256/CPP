#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a \n";
    cin>>a;
    if(a>0){
        cout<<a<<" is a positive number";
    }   
    else if(a<0){
        cout<<a<<" is a negative number";
    }
    else{
        cout<<a<< " is neither positive nor negative";
    }
}