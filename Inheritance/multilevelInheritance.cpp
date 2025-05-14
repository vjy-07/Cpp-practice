#include<iostream>
using namespace std;


class Base{
    public:
    void show(){
        cout<<"base"<<endl;
    }
};
class Derived1: public Base{
    public:
    void showD(){
        cout<<"Derived"<<endl;
    }
};
class Derived2: public Derived1{
    public:
    void showD2(){
        cout<<"Derived2"<<endl;
    }
};

int main(){
    Derived2 d;
    d.showD2();
    d.showD();
    d.show();
    return 0;
}