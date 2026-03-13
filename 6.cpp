#include <iostream>
using namespace std;

int main()
{
    // int value = 25;

    // for (int i=1; i<=10; i++){
    //     cout<<value<<" * "<<i<<" = "<<value * i << endl;
    // }

    int arr[5] = {10,40,30,50,33};
    int size = 5;
    int value = 35;
    int closest = arr[0];

    for (int i=0; i<size; i++){
        int diffreance = arr[i] - value;

        if(diffreance < 0){
            diffreance = -diffreance;
        }

        int closestdif = closest - value;
        if (closestdif < 0){
            closestdif = -closestdif;
        }

        if (diffreance < closestdif){
            closest=arr[i];
        }

    }
    cout<<"Closest value: "<<closest;

}