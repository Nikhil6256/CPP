// Factorial Calculation
#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact; 
}

int main()
{
    int a;
    cout<<"Enter the value\n";
    cin>>a;
    cout<<"Answer of factorial "<<a<< " is "<<factorial(a)<<endl;

    int b=9;
    cout<<"factorial of 9 is "<<factorial(b);
    return 0;
}