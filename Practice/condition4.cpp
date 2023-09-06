#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    if (n>0)    
    {
        cout<<"Number is positive";
    }
    else if (n==0)
    {
        cout<<"Number is 0";
    }
    else
    cout<<"Number is negative";
    return 0;
}