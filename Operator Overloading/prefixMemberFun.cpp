#include<iostream>
using namespace std;

class Counter{
    private:
    int value;
    public:
    Counter(int v=0){
        value=v;
    }
    Counter& operator ++(){
        ++value;
        return *this;
    }
    void display(){
        cout<<"updated value is: "<<value<<endl;
    }
};

int main(){
    Counter c(5);
    ++c;
    c.display();
    return 0;
}