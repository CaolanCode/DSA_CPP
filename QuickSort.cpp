/*
    Quick Sort
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::swap;

void quickSort(int arr[], int leftIndex, int rightIndex);
int pivot(int arr[], int pivotIndex, int endIndex);

int main()
{
    int arr[] = {4,6,1,7,3,2,5};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int returnIndex = pivot(arr, 0, size-1);
    
    for(int i = 0; i < size; i++) cout << arr[i] << ", ";
    cout << endl;
    cout << returnIndex << endl;
    
    return 0;
}

int pivot(int arr[], int pivotIndex, int endIndex)
{
    int swapIndex = pivotIndex;
    for(int i = pivotIndex + 1; i <= endIndex; i++)
    {
        if(arr[i] < arr[pivotIndex]) {
            swapIndex++;
            swap(arr[i], arr[swapIndex]);
        }
    }
    swap(arr[swapIndex], arr[pivotIndex]);
    return swapIndex;
}

void quickSort(int arr[], int leftIndex, int rightIndex)
{
    
}
