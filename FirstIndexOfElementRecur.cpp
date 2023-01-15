/*
    find first occurance of an element
 */
#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int number, int index);

int main()
{
    int number, index;
    number = index = 0;
    int arr[] = {1,2,3,4,5};
    cout << "Enter the number to search: ";
    cin >> number;
    
    index = firstOccurance(arr, 5, number, 0);
    if(index == -1) {
        cout << number << " is not in the array\n";
    } else cout << number << " is at index " << index << endl;
    
    return 0;
}

int firstOccurance(int arr[], int size, int number, int index)
{
    if(size == index) return -1;
    
    if(arr[index] == number) return index;
    
    return firstOccurance(arr, size, number, index+1);
}
