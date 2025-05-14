#include<iostream>
using namespace std;

class Shape{
    public: 
    virtual void area()=0;
};
class Circle: public Shape{
    public:
    void area() override{
        cout<<"π*r*r"<<endl;
    }
};

int main(){
    Circle obj;
    obj.area();
    return 0;
}