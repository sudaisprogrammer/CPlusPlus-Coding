#include<iostream>
using namespace std;

template <typename A>

void swap(A &a,A &b){
    A temp = a;
    a=b;
    b=temp;
}
int main(){
    int a = 1,b=4;
    swap(a,b);
    cout<<"a is "<<a<<" and b is "<<b<<endl;
    double d1=2.5,d2 =3.5;
    swap(d1,d2);
    cout<<"d1 is "<<d1<<" and d2 is "<<d2<<endl;
    char c1 = 'a',c2 = 'b';
    swap(c1,c2);
    cout<<"c1 is "<<c1<<" and c2 is "<<c2<<endl;
    return 0;
}