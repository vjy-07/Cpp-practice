#include<iostream>
using namespace std;


class Base{
    public:
    void show(){
        cout<<"base"<<endl;
    }
};
class Derived: public Base{
    public:
    void showD(){
        cout<<"Derived"<<endl;
    }
};
int main(){
    Derived d;
    d.show();
    d.showD();
    return 0;
}