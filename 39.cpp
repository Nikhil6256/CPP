#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = n;
    while(i>0){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i-1;
    }
}