#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cout<<"\n";
    cin>>b;
    if(a<b)
    {
        cout<<a<<"<"<<b;
    }
    else
    cout<<b<<"<"<<a;
    return 0;
}