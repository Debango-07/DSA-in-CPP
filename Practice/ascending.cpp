#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<endl;
    cin>>c;
    cout<<endl;
    cout<<"In ascending order"<<endl;
    if (a<b&&b<c)
    {
        cout<<a<<","<<b<<","<<c;
    }
    else if (b<a&&a<c)
    {
        cout<<b<<","<<a<<","<<c;
    
    }
     else if (b<c&&c<a)
    {
        cout<<b<<","<<c<<","<<a;
    }
     else if (c<a&&a<b)
    {
        cout<<c<<","<<a<<","<<b;
    }
     else if (a<c&&c<b)
    {
        cout<<a<<","<<c<<","<<b;
    }
     else if (c<b&&b<a)
    {
    cout<<c<<","<<b<<","<<a;
    }
    return 0;
}