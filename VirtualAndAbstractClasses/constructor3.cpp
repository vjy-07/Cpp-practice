#include<iostream>
using namespace std;

class Base{
    public:
    Base(int a){
        cout<<"Base class Constructor"<<endl;
    }
};
class Derived: public Base{
    public:
    Derived():Base(10){
        cout<<"Derived class Constructor"<<endl;
    }
};

int main(){
    Derived d;
    return 0;
}