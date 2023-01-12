/*
    Reverse the order of the array elements
 */
#include <iostream>
using namespace std;

int main()
{
    int size, temp;
    size = temp = 0;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    int start = 0;
    int end = size-1;
    
    cout << "Original array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
