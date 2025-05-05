#include<iostream>
using namespace std;

class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
    double add(double a, double b){
        return a+b;
    }
};

int main(){
    Calculator calc;
    cout<<"sum of 2 integers: "<<calc.add(2,3)<<endl;
    cout<<"sum of 3 integers: "<<calc.add(4,3,2)<<endl;
    cout<<"sum of 2 doubles: "<<calc.add(2.4,3.7)<<endl;
    return 0;
}