#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    if (n>0&&n%2!=0)    
    {
        cout<<"Number is positive and odd"<<endl;
        cout<<"Its square will be="<<n*n;
    }
    else
    cout<<"Its cube is ="<<n*n*n;
    return 0;
}