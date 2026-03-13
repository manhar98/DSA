#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50};
    int value = 500;
    int index = 3;
    int size = 5;
    
    // add new element
    for(int i=size; i>index; i--){
        arr[i]=arr[i-1];
    }

    // update element
    arr[index]=value;
    size++;

    
}