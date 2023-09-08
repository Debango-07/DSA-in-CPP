#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price for the article"<<endl;
    cin>>cp;
    cout<<"Enter selling price for the article"<<endl;
    cin>>sp;
    if (sp>cp)
    {
        cout<<"Profit of "<<sp-cp;
    }
    else
    cout<<"Loss of "<<cp-sp;
    return 0;
}