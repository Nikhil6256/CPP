#include<iostream>
using namespace std;

int main(){
    int Number[15];

    cout<<"Value at 14 index is "<<Number[14]<<endl;
    //contain any garbage value for upper cout

    //initialising an array
    int second[3] = {5,7,11};       

    //accessing an element

    cout<<"value at 2nd index "<<second[2]<<endl;

    int third[15] = {2,7};
    // cout<<"value at 2nd index "<<third[1]<<endl;
    int n=15;
    cout<<"Printing the array "<<endl;
    //Printing the array
    for(int i=0;i<n;i++){
    cout<<third[i]<<" ";
    }
    //Initialize all location with 0
    int fourth[10]={0};
    n=10;
    cout<<"Printing the array "<<endl;
    //Printing the array
    for(int i=0;i<n;i++){
    cout<<fourth[i]<<" ";
    }

    int fifth[10]={1};
    n=10;
    cout<<"Printing the array "<<endl;
    //Printing the array
    for(int i=0;i<n;i++){
    cout<<fifth[i]<<" ";
    }
    cout<<"\nEverything is fine\n";


}