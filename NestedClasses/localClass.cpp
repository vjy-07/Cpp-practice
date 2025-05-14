#include<iostream>
using namespace std;

void localclass(){
    class Local{
        public:
        void display(){
            cout<<"Local class"<<endl;
        }
    };
    Local obj;
    obj.display();
}

int main(){
    localclass();
    return 0;
}