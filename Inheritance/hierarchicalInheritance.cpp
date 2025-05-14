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
class Derived2: public Base{
    public:
    void showD2(){
        cout<<"Derived2"<<endl;
    }
};

int main(){
    Derived1 d1;
    d1.showD();
    Derived2 d2;
    d2.showD2();
    return 0;
}