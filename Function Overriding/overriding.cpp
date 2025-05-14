#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"Base show"<<endl;
    }
};
class Derived:public Base{
    public:
    void show() override{
        cout<<"Derived show"<<endl;
    }
};

int main(){
    Base* b;
    Derived d;
    b=&d;
    b->show();
    b->Base::show(); // shows base class show function
    return 0;
}

//and without using virtual and override if we create a base class pointer
//that points to the object of derived class it still shows the base functions.
