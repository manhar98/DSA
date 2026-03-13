#include <iostream>
using namespace std;

int main(){
    int arr [5] = {20,65,40,33,90};
    int odd=0, even=0;

    for (int i=0; i<5; i++){
        if(arr[i] % 2 ==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Odd numbers: "<<odd<<endl;
    cout<<"Even numbers: "<<even<<endl;
}