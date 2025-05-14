#include<iostream>
using namespace std;

class Counter{
    private:
    int value;
    public:
    Counter(int v){
        value=v;
    }
    void display(){
        cout<<"value: "<<value<<endl;
    }
    friend Counter& operator ++(Counter& c);
};

Counter& operator ++(Counter& c){
    ++c.value;
    return c;
}

int main(){
    Counter c(5);
    ++c;
    c.display();
    return 0;
}