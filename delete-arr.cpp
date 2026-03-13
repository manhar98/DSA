#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50,60};
    // int value = 35;
    int index = 4;
    int size = 6;

    for (int i=index; i<size; i++){
        arr[i]=arr[i+1];
    }
    size--;
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}