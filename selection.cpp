#include <iostream>
using namespace std;

class Sort{
    public:
    void selsctionSort(int arr[], int size){
        for (int i=0; i<size; i++){
            int minindex = i;
            for (int j= i+1; j<size; j++){
                if(arr[j] < arr[minindex]){
                    minindex = j;
                }
            }
                swap(arr[i],arr[minindex]);
        }
    }
};

int main(){
    Sort s;
    int arr[] = {20,97,54,89,33};
    int length = sizeof(arr) / sizeof(arr[0]);

    s.selsctionSort(arr,length);

    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
}