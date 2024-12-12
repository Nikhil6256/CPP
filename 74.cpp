// Check Even or Odd
#include<iostream>
using namespace std;
    bool isEven(int a){
        return a%2==0;
}
int main(){
    int n;
    cout<<"Enter value\n";
    cin>>n;
    if(isEven(n)){
        cout<<n<<" is a even number";
    }
    else{
        cout<<n<<" is a odd number";
    }
}