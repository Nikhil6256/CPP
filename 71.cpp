//Fibonnaci series using function
#include<iostream>
using namespace std;

    int fib(int n){
        int a=0,b=1;
        if(n==1)
        return 0;
        else if(n==2)
        return 1;

        for(int i=0;i<n-3;i++){
            int temp = a+b;
            a=b;
            b=temp;
        }
        return (a+b);
    }

    int main(){
        int n;
        cout<<"Enter n\n";
        cin>>n;
        cout<<"The nth value of fibonacci series is : "<<fib(n)<<endl;
        return 0;
    }