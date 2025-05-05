#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void area()=0;
};
class Rectangle: public Shape{
    private:
    int l,b;
    public:
    Rectangle(int len, int br){
        l=len;
        b=br;
    }
    void area(){
        cout<<"area of rectangle: "<<l*b<<endl;
    }
};
int main(){
    Rectangle r(5,3);
    r.area();
    return 0;
}