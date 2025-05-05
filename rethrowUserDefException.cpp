#include<iostream>
using namespace std;

class MyException{
    public:
    string message;
    MyException(string msg){
        message=msg;
    }
};

void testFunction(){
    try{
        throw MyException("User defined Exception");
    }
    catch(MyException& e){
        cout<<"Caught in testFunction "<<e.message<<endl;
        throw;
    }
}

int main(){
    try{
        testFunction();
    }
    catch(MyException& e){
        cout<<"Caught in main Function "<<e.message<<endl;
    }
    return 0;
}