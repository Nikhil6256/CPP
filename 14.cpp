#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value\n";
    cin>>n;
    int i = 1, sum=0; 
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"Value of sum is "<<sum;
}