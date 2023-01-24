/*
    Merge sort
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void merge(int arr[], int leftIndex, int midIndex, int rightIndex);
void mergeSort(int arr[], int leftIndex, int rightIndex);

int main()
{
    int arr[] = {3,1,4,2};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int leftIndex = 0;
    int rightIndex = size - 1;
    
    mergeSort(arr, leftIndex, rightIndex);
    
    
    for(int i = 0; i < size; i++) cout << arr[i] << ", ";
    
    return 0;
}


void merge(int arr[], int leftIndex, int midIndex, int rightIndex)
{
    int leftArraySize = midIndex - leftIndex + 1;
    int rightArraySize = rightIndex - midIndex;
    int leftArray[leftArraySize];
    int rightArray[rightArraySize];
    
    for(int i = 0; i < leftArraySize; i++) leftArray[i] = arr[leftIndex + i];
    
    for(int j = 0; j < rightArraySize; j++) rightArray[j] = arr[midIndex + 1 + j];
    
    int index = leftIndex;
    int i, j;
    i = j = 0;
    
    while(i < leftArraySize && j < rightArraySize)
    {
        if(leftArray[i] <= rightArray[j]) {
            arr[index] = leftArray[i];
            index++;
            i++;
        } else {
            arr[index] = rightArray[j];
            index++;
            j++;
        }
    }
    
    while(i < leftArraySize)
    {
        arr[index] = leftArray[i];
        index++;
        i++;
    }
    
    while(j < rightArraySize)
    {
        arr[index] = rightArray[j];
        index++;
        j++;
    }
}

void mergeSort(int arr[], int leftIndex, int rightIndex)
{
    if(leftIndex >= rightIndex) return;
    
    int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
    mergeSort(arr, leftIndex, midIndex);
    mergeSort(arr, midIndex+1, rightIndex);
    
    merge(arr, leftIndex, midIndex, rightIndex);
}
