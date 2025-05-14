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

class Final:public Derived2{
    public:
    void showF(){
        cout<<"Final"<<endl;
    }
};

int main(){
    Final f;
    f.show();
    f.showD2();
    f.showF();
    return 0;
}