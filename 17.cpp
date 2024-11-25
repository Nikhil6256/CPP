#include<iostream>
using namespace std;
int main(){
    int n,not_prime = 0;
    int i = 2;

    cout<<"Enter the value\n";
    cin>>n;

    while(i<n){
        if(n%i == 0){
        not_prime = 1;
        }
        else{
            not_prime = 0;
        }
        i=i+1;
    }
    if(not_prime = 0){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }

}