#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *arr=new int[n];
    cout<<"enter "<<n<<" elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Total sum: "<<sum<<endl;
    delete[] arr;
    cout << "Dynamic memory has been deallocated." << endl;

    return 0;
}