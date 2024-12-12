// Swap Two Numbers
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;

    temp = a;
    a=b;
    b=temp;
}


int main()
{
  int num1,num2;
  cout<<"Enter two numbers\n";
  cin>>num1>>num2;
swap(num1,num2);
cout<<"After swapping "<<num1<<" "<<num2;
  return 0;
  }
