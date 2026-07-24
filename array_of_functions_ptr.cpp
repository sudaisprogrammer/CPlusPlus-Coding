#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int prod(int a,int b){
    return a*b;
}
int main(){
    int(*operations[3])(int ,int);
    operations[0] = add;
    operations[1] = sub;
    operations[2] = prod;
    cout<<"Addition is "<<operations[0](2,3)<<endl;
    cout<<"difference is "<<operations[1](4,3)<<endl;
    cout<<"product is "<<operations[2](5,3)<<endl;
    return(EXIT_SUCCESS);
}