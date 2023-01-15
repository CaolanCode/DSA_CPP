/*
    find last occurance of an element
 */
#include <iostream>
using namespace std;

int lastOccurance(int arr[], int size, int number);

int main()
{
    int number, index;
    number = index = 0;
    int arr[] = {1,4,3,4,5};
    cout << "Enter the number to search: ";
    cin >> number;
    
    index = lastOccurance(arr, 5, number);
    if(index == -1) {
        cout << number << " is not in the array\n";
    } else cout << number << " is at index " << index << endl;
    
    return 0;
}

int lastOccurance(int arr[], int size, int number)
{
    if(size == 0) return -1;
    
    if(arr[size-1] == number) return size-1;
    
    return lastOccurance(arr, size-1, number);
}
