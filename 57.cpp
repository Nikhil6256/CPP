#include<iostream>
#include<string>
using namespace std;
int main(){
    string name1,name2;
    int percentage1,percentage2;
    cin >> name1 >> name2;
    cin>>percentage1>>percentage2;

    if(percentage1>percentage2){
        cout<<name1;
    }
    else if(percentage2>percentage1){
        cout<<name2;
    }
    else{
        cout<<"Equal\n";
    }
}