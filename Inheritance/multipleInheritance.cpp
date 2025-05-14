#include<iostream>
using namespace std;


class Base{
    public:
    void show(){
        cout<<"base"<<endl;
    }
};
class Base2{
    public:
    void showB(){
        cout<<"base2"<<endl;
    }
};
class Derived: public Base, public Base2{
    public:
    void showD(){
        cout<<"Derived"<<endl;
    }
};
int main(){
    Derived d;
    d.show();
    d.showB();
    d.showD();
    return 0;
}