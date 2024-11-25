#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value\n";
    cin>>n;

     int i = 2;
    while(i<n){
        if(n%i == 0){
            cout<<"not a prime number for "<<i<<endl;
        }
        else{
            cout<<"prime number for "<<i<<endl;
        }
            i=i+1;
            
    }
}
