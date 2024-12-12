// Maximum of Three Numbers
#include<iostream>
using namespace std;

int Max(int a,int b,int c){
    if((a>b)&&(a>c)){
        return a;
    }
    else if((b>a)&&(b>c)){
        return b;
    }
    else
    return c;
}
int main(){
    int d,e,f;
    cout<<"Enter three number\n";
    cin>>d>>e>>f;
    int greater = Max(d,e,f);
    cout<<"Greatest among 3 number is \n"<<greater;
    return 0;
}
