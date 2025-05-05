#include<iostream>
using namespace std;

class A{
    public:
    void showA(){
        cout<<"showA"<<endl;
    }
};

class B: public A{
    public:
    void showB(){
        cout<<"showB"<<endl;
    }
};

class C: public A{
    public:
    void showC(){
        cout<<"showC"<<endl;
    }
};

class D: public B, public C{
    public:
    void showD(){
        cout<<"showD"<<endl;
    }
};

int main(){
    D obj;
    obj.B::showA();
    obj.C::showA();
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}