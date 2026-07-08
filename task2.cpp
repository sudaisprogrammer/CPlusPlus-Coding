#include<iostream>
#include<cmath>
#include<complex>
using namespace std;

class Complex{
    private:
        double real;
        double imaginary;
    public:
        Complex(){}
        Complex(double r,double i):real(r),imaginary(i){}
        double getreal()const{
            return real;
        }
        double getimag()const{
            return imaginary;
        }
        Complex operator+(const Complex&obj){
            return Complex(obj.real+real,obj.imaginary+imaginary);
        }
        Complex operator-(const Complex&obj){
            return Complex(obj.real-real,obj.imaginary-imaginary);
        }
        Complex operator*(const Complex &obj){
            return Complex((real*obj.real)+((-1)*(imaginary*obj.imaginary)),(real*imaginary+obj.real*obj.imaginary));
        }
        void operator~()const{
            cout<<"Real part is "<<real<<" imaginary part is "<<imaginary<<"i";
        }
};
int main(){
    Complex c1(2,3);
    Complex c2(1,2);
    Complex c3 = c1+c2;
    ~c3;
    return EXIT_SUCCESS;
}