#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int prod(int a,int b){ //main pointer funtions/driver function
    return a*b;
}
int main(){
    int(*operations[3])(int ,int);
    operations[0] = add; //assigining address of add function at operations[0]
    operations[1] = sub; //assigining address of sub function at operations[1]
    operations[2] = prod; //assigining address of prod function at operations[2]
    cout<<"Addition is "<<operations[0](2,3)<<endl;
    cout<<"difference is "<<operations[1](4,3)<<endl;
    cout<<"product is "<<operations[2](5,3)<<endl;
    return(EXIT_SUCCESS);
}