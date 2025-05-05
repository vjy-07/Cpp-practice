#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream writefile("Students.txt");
    if(!writefile){
        cout<<"error opening file for writing"<<endl;
        return 1;
    }
    writefile<<"This is a text file to count no of consonants";
    writefile.close();

    ifstream readfile("Students.txt");
    if(!readfile){
        cout<<"error opening file for reading"<<endl;
        return -1;
    }
    char ch;
    int count=0;
    while(readfile.get(ch)){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            if(ch>='A' && ch<='Z'){
                ch+=('a'-'A');
            }
            if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
                count++;
            }
        }
    }
    readfile.close();
    cout<<"no of consonants: "<<count<<endl;
    return 0;
}