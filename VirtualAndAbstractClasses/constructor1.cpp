#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base class Constructor"<<endl;
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"Derived class Constructor"<<endl;
    }
};

int main(){
    Derived d;
    return 0;
}