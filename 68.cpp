#include<iostream>
using namespace std;

//Function signature
void printingCount(int n){
    //Function Body
    for(int i=1;i<=n;i++)
    cout<<i<<"\n";
}

int main(){
int n;
cout<<"Enter number\n";
cin>>n;
//Function Call
printingCount(n);
return 0;
}