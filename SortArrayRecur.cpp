/*
    Check if array is sort using recursion
    and return sum of array
 */
#include <iostream>
using namespace std;

bool sorted(int arr[], int size);
int sum(int arr[], int size);

int main()
{
    int arr[] = {1,2,3,4,5};
    
    if(sorted(arr, 5)) cout << "Array is sorted\n";
    else cout << "Array is not sorted\n";
    
    cout << "Sum of array: " << sum(arr, 5) << endl;
    
    return 0;
}

bool sorted(int arr[], int size)
{
    if(size == 0 || size == 1) return true;
    
    if(arr[0] > arr[1]) return false;
    
    bool result = sorted(arr+1, size-1);
    
    return result;
}

int sum(int arr[], int size)
{
    if(size == 0) return 0;
    
    return arr[0] + sum(arr+1, size-1);
}
