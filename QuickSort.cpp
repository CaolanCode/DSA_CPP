/*
    Quick Sort
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::swap;

void quickSort(int arr[], int start, int end);
int partition(int arr[], int start, int end);

int main()
{
    int arr[] = {5,4,22,6,34,56,2};
    
    quickSort(arr, 0, 6);
    
    for(int i = 0; i < 7; i++) cout << arr[i] << ", ";
    
    return 0;
}

void quickSort(int arr[], int start, int end)
{
    if(start >= end) return;
    
    int p = partition(arr, start, end);
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);
    
}

int partition(int arr[], int start, int end)
{
    int index = end;
    
    for(int i = end-1; i >= 0; i--)
    {
        if(arr[end] < arr[i]) index = i;
    }
    swap(arr[index], arr[end]);
    
    return index;
}
