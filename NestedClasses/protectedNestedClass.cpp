#include<iostream>
using namespace std;

class Base{
    protected:
    class Helper{
        public:
        void display(){
            cout<<"Inside Base helper"<<endl;
        }
    };
};

class Derived: public Base{
    public:
    void useHelper(){
        Helper h;
        h.display();
    }
};

int main(){
    Derived d;
    d.useHelper();
    return 0;
}