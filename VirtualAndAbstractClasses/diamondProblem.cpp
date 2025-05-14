#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"Base Class"<<endl;
    }
};
class Derived1: virtual public Base{};
class Derived2: virtual public Base{};

class FinalDerived: public Derived1, public Derived2{};

int main(){
    FinalDerived obj;
    obj.display(); // or use obj.Derived1::display() and we can skip adding virtual in above derived classes
    return 0;
}

