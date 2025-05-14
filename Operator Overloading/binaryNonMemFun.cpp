#include<iostream>
using namespace std;

class Complex{
    private:
    double real, imag;
    public:
    Complex(double r,double i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    friend Complex operator + (const Complex& lhs, const Complex& rhs);
};
Complex operator + (const Complex& lhs, const Complex& rhs){
    return Complex(lhs.real+rhs.real , lhs.imag+rhs.imag);
}

int main(){
    Complex c1(3,4), c2(2,1);
    Complex sum=c1+c2;
    sum.display();
    return 0;
}