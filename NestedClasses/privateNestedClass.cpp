#include<iostream>
using namespace std;

class Outer{
    private:
    class Inner{
        public:
        void display(){
            cout<<"Inside Inner class"<<endl;
        }
    };
    public:
    void accessInner(){
        Inner obj;
        obj.display();
    }
};

int main(){
    Outer obj;
    obj.accessInner();
    return 0;
}