#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character\n";
    cin>>ch;
    if(ch>64 && ch<91){
        cout<<ch<<" is a upper case";
    }
    else if(ch>96 && ch<123){
        cout<<ch<<" is a lower case";
    }
    else if(ch>47 && ch<58){
        cout<<ch<<" is a numbric";
    }
}
