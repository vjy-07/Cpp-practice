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

class C: public B{
    public:
     void showC(){
        cout<<"showC"<<endl;
    }
};

int main(){
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}