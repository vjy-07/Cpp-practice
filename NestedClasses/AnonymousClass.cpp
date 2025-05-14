#include<iostream>
using namespace std;

void anonymousClass(){
    class{
        public:
        void show(){
            cout<<"Anonymous Class"<<endl;
        }
    }obj1, obj2;

    obj1.show();
    obj2.show();
}
int main(){ 
    anonymousClass();
    return 0;
}