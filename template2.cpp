#include<iostream>
using namespace std;

template<typename A>

class Any{
    private:
        T content;
    public:
        Any(A value):content(value){}
        T display(){
            return content;
        }
};

int main(){
    Any<int> anybox(345);
    cout<<"value is "<<anybox.(<<endl;
}