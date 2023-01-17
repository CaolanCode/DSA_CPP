/*
    Merge sort
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void mergeArrays(int x[], int y[], int arr[], int start, int end);
void mergeSort(int arr[], int start, int end);

int main()
{
    int arr[] = {3,21,54,1,43,5,65};
    
    mergeSort(arr, 0, 6);
    
    for(int i = 0; i < 7; i++) cout << arr[i] << ", ";
    
    return 0;
}

void mergeSort(int arr[], int start, int end)
{
    if(start >= end) return;
    
    int mid = (start + end) / 2;
    int x[100], y[100];
    for(int i = 0; i <= mid; i++) x[i] = arr[i];
    for(int i = mid+1; i <= end; i++) y[i] = arr[i];
    
    mergeSort(x, start, mid);
    mergeSort(y, mid+1, end);
    mergeArrays(x, y, arr, start, end);
}

void mergeArrays(int x[], int y[], int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    int i, j, k;
    i = k = start;
    j = mid + 1;
    
    while(i <= mid && j <= end)
    {
        if(x[i] < y[j]) {
            arr[k] = x[i];
            i++;
            k++;
        } else {
            arr[k] = y[j];
            j++;
            k++;
        }
    }
    
    while(i <= mid)
    {
        arr[k] = x[i];
        i++;
        k++;
    }
    
    while(j <= end)
    {
        arr[k] = y[j];
        j++;
        k++;
    }
    
}
