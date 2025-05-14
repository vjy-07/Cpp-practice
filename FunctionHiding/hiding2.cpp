#include<iostream>
using namespace std;

class Base{
    public:
    void show(){
        cout<<"base show"<<endl;
    }
    void show(int a){
        cout<<"base show(int)"<<endl;
    }
};
class Derived: public Base{
    public:
    using Base::show;
    void show(){
        cout<<"Derived show"<<endl;
    }
};
int main(){
    Derived d;
    d.show();
    d.show(10);
    // d.Base::show(); this is still hiding
    return 0;
}