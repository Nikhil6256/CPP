#include<iostream>
using namespace std;

void printArray(int arr[], int size){

     cout<<"Printing the array "<<endl;
    //Printing the array
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<"Printing DONE"<<endl;
}

int main()
{
  int third[15] = {2,7};

//   int n=15;                                                                                          
  printArray(third,10);

  int fourth[10] = {0};

//   n=10;
    printArray(fourth,10);          
}