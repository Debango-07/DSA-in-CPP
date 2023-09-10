#include<iostream>
using namespace std;
int main(){
    int fact(int);
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    n=fact(n);
    cout<<n;
    return 0;
}
int fact(int k){
    if(k==0)
    return 1;
    int s;
    s=k*fact(k-1);
    return s;
}