/*
    find the largest element of an array
 */
#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    int largest = INT_MIN; // minus infinite
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > largest) largest = arr[i];
    }
    
    cout << "The largest number in the array is: " << largest << endl;
    
    return 0;
}
