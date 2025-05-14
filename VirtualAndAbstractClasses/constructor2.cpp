#include<iostream>
using namespace std;

class Base{
    public:
    Base(int a){
        cout<<"value of a: "<<a<<endl;
    }
};
class Derived: public Base{
    public:
    Derived(int a, int b): Base(a){
        cout<<"value of b: "<<b<<endl;
    }
};

int main(){
    Derived d(10,20);
    return 0;
}