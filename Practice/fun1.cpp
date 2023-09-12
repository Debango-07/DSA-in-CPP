#include<iostream>
using namespace std;
float circum(int a){
    float cir;
    cir=2*3.14*a;
    return cir;
}
float are(int b){
    float ar;
    ar=3.14*b*b;
    return ar;
}
int main(){
    float r,area,circumference;
    cout<<"Enter the radius: ";
    cin>>r;
    area=are(r);
    circumference=circum(r);
    cout<<"Area is "<<area<<endl;
    cout<<"Circumference is "<<circumference;
    return 0;
}