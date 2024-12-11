#include<iostream>
using namespace std;

    int AP(int n){
        return (3*n+7);
    }

int main(){
    int n;
    cout<<"Enter the value\n";
    cin>>n;
    
    cout<<"Answer is "<<AP(n)<<endl;
    return 0;
}