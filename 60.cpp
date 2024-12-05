#include<iostream>
using namespace std;
int main(){
    char ch = '1';
    int num = 1;
    switch(ch){
        case 1: cout<<"First\n";
        cout<<"First again\n";
        break;

        case '1': switch(num){
            case 1: cout<<"Value of num is "<<num<<endl;
            break;
        }
        break;

        default: cout<<"It is default case\n";
    }
}
