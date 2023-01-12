/*
    Print the array in reverse order
 */
#include <iostream>
using namespace std;

int main() {
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "The array reversed: ";
    for(int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    
    return 0;
}
