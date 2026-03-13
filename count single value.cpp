#include <iostream>
using namespace std;

int main(){   
    int arr[10]={10,20,50,10,35,20,50,40,40,50};
    int value = 10;
    int count = 0;

    for(int i=0; i<10; i++){
        if(arr[i] == value){
            count++;
        }
    };
    cout<<"Value found and count "<<count<<endl;


    
}