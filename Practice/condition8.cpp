//wrong 
#include<iostream>
using namespace std;
int main()
{
    int r,choice,n;
    int area,perimeter;
    cout<<"Enter the radius"<<endl;
    cin>>r;
    cout<<"Enter your choice"<<endl<<"1 for area of circle"<<endl<<"2 for perimeter of circle"<<endl;
    cin>>choice;
    if (n==1)
    {
        cout<<"Its area is ";
        area=22/7*r*r;
        cout<<area;
    }
    else
        cout<<"Its perimeter is";
        perimeter=2*22/7*r;
        cout<<perimeter;
    return 0;
} 
