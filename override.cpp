#include<iostream>
using namespace std;

class Employee{
    protected:
    string employeeName;
    int employeeId;
    int age;
    public:
    Employee(){}
    Employee(string name, int id, int age){
        employeeName=name;
        employeeId=id;
        this->age=age;
    }
    void display(){
        cout<<"emp name: "<<employeeName<<endl;
        cout<<"emp id: "<<employeeId<<endl;
        cout<<"emp age: "<<age<<endl;
    }
    virtual void showDesignation(){
        cout<<"designation in base class"<<endl;
    }
};

class Developer: public Employee{
    public:
    Developer(string name, int id, int age){
        employeeName=name;
        employeeId=id;
        this->age=age;
    }
    void showDesignation() override{
        cout<<"Developer"<<endl;
    }
};
class Tester: public Employee{
    public:
    Tester(string name, int id, int age){
        employeeName=name;
        employeeId=id;
        this->age=age;
    }
    void showDesignation() override{
        cout<<"Tester"<<endl;
    }
};

int main(){
    Developer dev("john", 101, 20);
    Tester test("doe",102,25);
    cout<<"dev"<<endl;
    dev.showDesignation();
    cout<<"test"<<endl;
    test.showDesignation();
    return 0;
}