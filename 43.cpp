#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //Phle space print krna hai

        int space = i-1;
        while(space){
            cout<<" ";
            space = space - 1;
        } 
        //Now print number
        int j=i;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}