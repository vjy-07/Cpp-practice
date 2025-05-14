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
    friend Counter operator ++(Counter& c,int);
};
Counter operator ++(Counter& c,int){
    Counter temp= c;
    ++c.value;
    return temp;
}

int main(){
    Counter c(5);
    Counter old=c++;
    old.display();
    c.display();
    return 0;
}