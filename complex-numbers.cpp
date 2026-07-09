#include<iostream>
using namespace std;
class Complex{
    private:
        double real,imaginary;
    public:
        Complex(){
            real = 0.0;
            imaginary = 0.0;
        }
        Complex(double real,double imaginary){
            this->real  =real;
            this->imaginary = imaginary;
        }
        double getreal()const{
            return real;
        }
        double getImag()const{
            return imaginary;
        }
        //operator overloading
        Complex operator+(const Complex&obj){
            return {real+obj.real,imaginary+obj.imaginary};
        }
        Complex operator-(const Complex&obj){
            return {real-obj.real,imaginary-obj.imaginary};
        }
        Complex operator*(const Complex&obj){
            return {(real*obj.real)+(-1*(imaginary*obj.imaginary)),(real*obj.imaginary)+(imaginary*obj.real)};
        }
       Complex operator/(const Complex& obj) {
            double denominator = obj.real * obj.real + obj.imaginary * obj.imaginary;
            if(denominator==0){
                cout<<"plese enter valid values\n";
            }
            return 
            {
                (real*obj.real+imaginary*obj.imaginary)/denominator,
                (imaginary*obj.real-real *obj.imaginary)/denominator
            };
        }
        void display()const{
            cout<<"Real is "<<real<<" imaginary is "<<imaginary<<"i\n";
        }

};
int main(){
    Complex c1(2,-3);
    Complex c2(-1,3);
    Complex c3 = c1/c2;
    c3.display();

    return 0;
}