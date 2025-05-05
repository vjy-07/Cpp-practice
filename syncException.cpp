#include<iostream>
using namespace std;

int main(){
    try{
        int a=10, b=0;
        if(b==0){
            throw "Division by 0 error";
        }
        cout<<a/b<<endl;
    }
    catch(const char* msg){
        cout<<"Caught exception: "<<msg<<endl;
    }
    return 0;
}