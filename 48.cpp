//Printing number from 1 to n;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;

    int i=1;
    for(; ; ){
        if(i<=n){
        cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
}