#include<iostream>
using namespace std;

class Complex{
    private:
    float real;
    float imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(float r, float i){
        real=r;
        imag=i;
    }

    Complex operator +(const Complex& c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void display(){
        cout<<real <<"+ "<< imag<<"i"<<endl; 
    }

};

int main(){
    Complex c1(2.2,3.4);
    Complex c2(1.5,2.3);
    Complex c3=c1+c2;
    cout<<"Sum of complex Numbers is: ";
    c3.display();
    return 0;
}