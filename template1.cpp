#include<iostream>
using namespace std;

template<typename T> //its like a function but work with any data type
T add(T a , T b, T c){
    return a+b+c;
}
int main(){
    cout<<"sum is "<<add(1,2,3)<<endl;
    cout<<"sum is "<<add(1,3,6)<<endl;
    return 0;
}