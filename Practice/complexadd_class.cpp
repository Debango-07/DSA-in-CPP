#include<iostream>
using namespace std;
struct complex{
    private:
    int a,b;
    public:
    void assign(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a = "<<a<<endl<<"b = "<<b;
    }
    complex add(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
    
};
int main(){
    complex c1;
    c1.assign(3,4);
    complex c2;
    c2.assign(5,6);
    complex c3;
    c3=c1.add(c2);
    c3.display();
    return 0;
}