#include <iostream>
using namespace std;

class Sort{
    private:
        int arr[100];
        int size;

    public:
        void setData(int a[], int s){
            size = s;
            for(int i=0; i<size; i++){
                arr[i] = a[i];
            }
        }

        void selectionSort(){
            for(int i=0; i<size; i++){
                int minindex = i;
                for (int j=i+1; j<size; j++){
                    if (arr[j] < arr[minindex]){
                        minindex = j;
                    }
                }
                swap(arr[i],arr[minindex]);
            }
        }

        void getData(){
            for(int i=0; i<size; i++){
                cout << arr[i] << " ";
            }
        }
};

int main(){
    Sort s;

    int arr[] = {85,63,24,2,96,50,46};
    int length = sizeof(arr) / sizeof(arr[0]);

    s.setData(arr,length);
    s.selectionSort();
    s.getData();
}