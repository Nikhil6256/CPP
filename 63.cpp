#include<iostream>
using namespace std;
int main(){

    int amount;
    cout<<"Enter the amount:"<<endl;
    cin>>amount;
    
    int num = 1;
    int note = 0;

    switch(num){
        case 1: {
            note = amount/100;
            amount = amount - (100*note);
            cout<<note<<" Rs. 100 note required."<<endl;
        }
        case 2:{
            note = amount/50;
            amount = amount - (50*note);
            cout<<note<<" Rs. 50 note required."<<endl;
        }
        case 3:{
            note=amount/20;
            amount = amount - (20*note);
            cout<<note<<" Rs. 20 note required."<<endl;
        }
        case 4:{
            note = amount/1;
            amount= amount - (1*note);
            cout<<note<<" Rs. 1 note required."<<endl;
        }
    }

}