/*
     return sum of array
 */
#include <iostream>
using namespace std;

int sum(int arr[], int size);
int sum2(int arr[], int size);
int sum3(int arr[], int size, int i);

int main()
{
    int arr[] = {1,2,3,4,5};
    
    cout << "Sum of array: " << sum(arr, 5) << endl;
    cout << "Sum of array: " << sum2(arr, 5) << endl;
    cout << "Sum of array: " << sum3(arr, 5, 0) << endl;
    
    return 0;
}

int sum(int arr[], int size)
{
    if(size == 0) return 0;
    
    return arr[0] + sum(arr+1, size-1);
}

int sum2(int arr[], int size)
{
    if(size == 0) return 0;
    
    return arr[size-1] + sum2(arr, size-1);
}

int sum3(int arr[], int size, int i)
{
    if(size == i) return 0;
    
    return arr[i] + sum3(arr, size, i+1);
}
