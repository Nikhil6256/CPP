#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        //phle space print krvana hai
        int space = n-i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //fir 1st triangle print krvana hai 
        int j = 1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }

        //ab 2nd triangle print krvana hai
        int start = i - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        i=i+1;
    }
}