#include<iostream>
using namespace std;
int main(){
    int temperature;
    cout<<"Enter the temperature "<<endl;
    cin>>temperature;
    if (temperature<20)
    {
        cout<<"It is cold";
    }
    else if (temperature>40)
    {
        cout<<"It is hot";
    }
    else
    cout<<"It is normal day";
    return 0;
}