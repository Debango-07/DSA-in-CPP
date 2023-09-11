// Write a program to print Fibonacci series of n terms where n is input by user :
// 0 1 1 2 3 5 8 13 24 ..... 
#include<iostream>
using namespace std;
int main(){
    int sum=0,n,f=0,s=1,t;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<f<<endl<<s<<endl;
    for(int i=3;i<=n;i++){
        t=f+s;
        cout<<t<<endl;
        f=s;
        s=t;
    }
    return 0;
}