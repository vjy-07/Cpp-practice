#include<iostream>
using namespace std;

class Counter{
    private:
    int val;
    public:
    Counter(int v){
        val=v;
    }
    Counter operator ++(int){
        Counter temp=*this;
        ++val;
        return temp;
    }
    void display() {
        cout<<"value is: "<<val<<endl;
    }
};

int main(){
    Counter c(5);
    Counter old=c++;
    old.display();
    c.display();
    return 0;
}