#include<iostream>
using namespace std;

class Outer{
    private:
    int x;
    public:
    Outer(){
        x=10;
    }
    void show(){
        cout<<"Inside Outer"<<endl;
    }
    class Inner{
        private:
        int x;
        public:
        Inner(){
            x=100;
        }
        void show(){
            Outer obj;
            obj.show();
            cout<<"x: "<<x<<endl;
        }
    };
};

int main(){
    Outer obj;
    obj.show();
    Outer::Inner obj2;
    obj2.show();

    return 0;
}