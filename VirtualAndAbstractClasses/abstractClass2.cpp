#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void makeSound()=0;
    virtual void category()=0;
};

class Dog: public Animal{
    public:
    void makeSound() override{
        cout<<"Bark"<<endl;
    }
    void category() override{
        cout<<"Mammal"<<endl;
    }
};

int main(){
    Dog obj;
    obj.makeSound();
    obj.category();
    return 0;
}