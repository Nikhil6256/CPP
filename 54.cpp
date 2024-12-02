#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){               //outer loop
        for(int j=i;j<=5;j++){          //inner loop
            cout<<i<<" "<<j<<endl;
        }
    }
}