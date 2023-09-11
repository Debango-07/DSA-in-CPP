#include<iostream>
using namespace std;
int main(){
    int sum,n,n1=0,n2=1;
    cout<<"Enter any number";
    cin>>n;
    cout<<n1<<","<<n2<<",";
    for(int i=3;i<=n;i++){
        sum=n1+n2;
        cout<<sum<<",";
        n1=n2;
        n2=sum;
    }
    return 0;
}