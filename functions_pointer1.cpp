#include<iostream>

using namespace std;

int add(int a,int b){
    return a+b;
}
int multiply(int a,int b){
    return a*b;
}
int sub(int a,int b){
    return a-b;
}
int calculate(int a,int b,int (*operations)(int,int)){
    return operations(a,b);
}
int main(){
    cout<<"Addition is "<<calculate(2,3,add)<<endl;
    cout<<"Product is "<<calculate(2,3,multiply)<<endl;
    cout<<"difference is "<<calculate(2,3,sub)<<endl;
    return 0;
}