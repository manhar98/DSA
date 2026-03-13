#include <iostream>
using namespace std;

class hiren{
    int *id;
    public:

    hiren(int n){
        id = new int(n);
        cout<<"constructor call"<<endl;
    }
    ~hiren(){
        delete id;
        id = nullptr;
        cout<<"disstructor call"<<endl;
    }
}; 

int main()
{
    // int *a = new int(10);
    // cout <<"a= "<<*a<<endl;
    // delete a;
    // a = nullptr;
    // cout<<"a = "<<a<<endl;


    // int *arr = new int[5];
    // for(int i=0; i<5; i++){
    //     arr[i]=i+1;
    //     cout<<arr[i]<<" ";
    // }

    hiren(5);
}