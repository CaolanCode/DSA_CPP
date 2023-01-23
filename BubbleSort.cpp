/*
    Bubble sort algorithm
 */
#include <iostream>
using namespace std;

void createArray(int arr[], int size);
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;
    
    int arr[size];
    createArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    
    return 0;
}

void createArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a value: ";
        cin >> arr[i];
    }
}

void bubbleSort(int arr[], int size)
{
    for(int i = size-1; i > 0; i--)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}
