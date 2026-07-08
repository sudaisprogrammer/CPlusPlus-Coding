#include<iostream>
using namespace std;

class Money{
    private:
        int dollars,cents;
    public:
        Money(){}
        Money(int d,int c):dollars(d),cents(c){}
        Money operator+(const Money&object){
            Money m1;
            m1.dollars = dollars+object.dollars;
            m1.cents = cents+object.cents;
            return m1;
        }
        Money operator-(const Money&object){
            Money m1;
            m1.dollars = dollars-object.dollars;
            m1.cents = cents-object.cents;
            return m1;
        }
        const Money operator=(const Money&object){
            dollars = object.dollars;
            cents = object.cents;
            return *this;
        }
        Money &operator++(){
            ++dollars;
            ++cents;
            return *this;
        }
        Money &operator--(){
            --dollars;
            --cents;
            return *this;
        }
        bool operator!=(const Money&obj){
            if(obj.dollars!=dollars && obj.cents!=cents){
                return true;
            }
            return false;
        }
        void operator~(){
            cout<<"Dollars are: "<<dollars<<" Cents are "<<cents<<endl;
        }
};
int main(){
    Money m1(2,2);
    Money m2(3,5);
    // Money m3 = m1+m2;
    // Money m3 = m1-m2;
    // Money m3 = m1-m2;
    // m1=m2;
    // m2=m1;
    // ~m1;
    // ~m2;
    // ++m1;
    // ~m1;
    if(m1!=m2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    // ~m3;
    return 0;
}