#include<iostream>
using namespace std;

void greet(){
    cout<<"Hi i am c++\n";
}
int main(){
    void(*ptr)() = greet;
    // here if we do like void (*ptr)();
    // ptr = greet or ptr = &greet; both are same and output will be same
    (ptr); //calling through pointer
    (*ptr)(); // same as (ptr);
    return 0;
}