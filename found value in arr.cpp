#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int value = 300;
    bool found = false;

    for(int i=0; i<6; i++){
        if(arr[i] == value){
            found=true;
            cout<<"Value found at index "<<i<<endl;
        }
    }
    if(!found){
        cout<<"Value not found"<<endl;
    }
}