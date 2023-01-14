/*
    Inbuilt Sort function
 */
#include <iostream>
#include <algorithm>
using namespace std;

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
    
    sort(arr, arr+size);
    
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    
    return 0;
}
