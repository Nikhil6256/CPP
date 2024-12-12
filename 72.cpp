// Sum of Two Numbers
#include<iostream>
using namespace std;

int sum(int a,int b){
    return (a+b);
}
int main(){
    int num1,num2;
    cout<<"Enter two variable\n";
    cin>>num1>>num2;

    int add = sum(num1,num2);
    cout<<"Answer is "<<add;
    return 0;
}
