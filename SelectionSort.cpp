/*
    Selection Sort Algorithm
 */
#include <iostream>
using namespace std;

void selectionSort(int a[], int size);

int main()
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;
    
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a value: ";
        cin >> arr[i];
    }
    
    selectionSort(arr, size);
    
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    
    return 0;
}

void selectionSort(int a[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        int smallest = i;
        for(int j = i+1; j < size; j++) if(a[j] < a[smallest]) smallest = j;
        if(a[i] > a[smallest]) swap(a[i], a[smallest]);
    }
    
}

