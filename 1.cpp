#include <iostream>
using namespace std;

int main(){
    int arr [5] = {-20,30,-47,50,70};
    int neg=0, pos=0;

    for (int i=0; i<5; i++){
        if (arr[i] > 0){
            pos++;
        }else if(arr[i] < 0){
            neg++;
        }
        // cout<<arr[i]<<endl;
    }
    cout<<"positve: "<<pos<<endl;
    cout<<"nagitve: "<<neg<<endl;
}