//Check pythagorian triplet or not
#include<iostream>
using namespace std;
bool check(int x,int y,int z){
    int m,a,b;
        m=max(x,max(y,z));
        if(m==x){
            a=y;
            b=z;
        }
        else if(m==y){
            a=x;
            b=z;
        }
        else{
            a=x;
            b=y;
        }
        if(m*m==a*a+b*b){
            return true;
        }
        else{
            return false;
        }
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythagorian Triplet";
    }
    else{
        cout<<"Not Pythagorian triplet";
    }
    return 0;
}