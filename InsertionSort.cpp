/*
    Insertion Sort
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::swap;

void insertionSort(int arr[], int size);

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
    
    insertionSort(arr, size);
    
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}

void insertionSort(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(j > -1 && temp < arr[j])
        {
            swap(arr[j+1], arr[j]);
            j--;
        }
    }
}
