#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;

    cout<<"Enter the value of A\n";
    cin>>a;

    cout<<"Enter the value of b\n";
    cin>>b;

    cout<<"Enter operation\n";
    cin>>op;

    switch(op){
        case '+' : cout<<(a+b);
        break;

        case '-' : cout<<(a-b);
        break;

        case '*' : cout<<(a*b);
        break;

        case '/' : cout<<(a/b);
        break;

        case '%' : cout<<(a%b);
        break;

        default : cout<<"Please enter a valid operation\n";
    }
}