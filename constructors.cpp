#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    public:
    //parameterized constructor
    Student(string n, int a){
        name=n;
        age=a;
    }
    //copy constructor
    Student(const Student& s){
        name=s.name;
        age=s.age;
    }

    void display(){
        cout<<"Name is: "<<name<<" and age is: "<<age<<endl;
    }
};

int main(){
    Student s1("John", 20);
    cout<<"parameterized: "<<endl;
    s1.display();
    Student s2=s1;
    cout<<"copy constructor: "<<endl;
    s2.display();
    return 0;
}