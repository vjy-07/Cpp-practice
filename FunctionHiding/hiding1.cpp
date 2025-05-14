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
    void show(){
        cout<<"Derived show"<<endl;
    }
};
int main(){
    Derived d;
    d.show();
    //d.show(10) error because all base show() functions are hidden
    // d.Base::show();
    // d.Base::show(10); these are accessible using scope resolution
    return 0;
}