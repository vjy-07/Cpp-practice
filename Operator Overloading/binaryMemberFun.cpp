#include<iostream>
using namespace std;

class Complex{
    private:
    double real,imag;
    public:
    Complex(double r, double i){
        real=r;
        imag=i;
    }
    Complex operator +(const Complex& c){
        return Complex(real+c.real, imag+c.imag);
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(3,4), c2(2,1);
    Complex sum=c1+c2;
    sum.display();
    return 0;
}
