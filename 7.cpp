#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 10, 20, 40, 50, 40, 60, 70};
    int lenght = 10;
    
    for (int i = 0; i < lenght; i++){
        for (int j = i + 1; j < lenght;){
            if (arr[i] == arr[j]){
                for (int k = j; k < lenght; k++){
                    arr[k] = arr[k + 1];
                }
                lenght--;
            }
            else{
                j++;
            }
        }
    }
    
    for (int i = 0; i < lenght; i++)
    {
        cout << arr[i] << " ";
    }
}