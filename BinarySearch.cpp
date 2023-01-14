/*
    Binary Search Algorithm
 */
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int number);

int main()
{
    int arr[] = {1, 3, 5, 6, 8, 9, 12, 23, 54, 89};
    int number, index, size;
    number = index = 0;
    size = 10;
    
    cout << "Enter number to search for: ";
    cin >> number;
    
    index = binarySearch(arr, size, number);
    
    if(index == -1) cout << "Number is not in the array\n";
    else cout << "The element is in the " << index << " index position\n";
    
    
    return 0;
}

int binarySearch(int arr[], int size, int number)
{
    
    int start, end, mid;
    start = 0;
    end = size-1;
    
    while(start <= end)
    {
        mid = start + (end - start) / 2; // prevents integer overflow when adding large numbers
        if(arr[mid] == number) return mid;
        else if(arr[mid] > number) end = mid - 1;
        else if(arr[mid] < number) start = mid + 1;
    }
    
    return -1;
}
