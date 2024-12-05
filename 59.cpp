#include<iostream>
using namespace std;
int main(){
    char ch = '1';
    switch(ch){
        case 1: cout<<"First\n";
        break;

        case '1': cout<<"character one\n";
        break;

        default: cout<<"It is default case\n";
    }
}
