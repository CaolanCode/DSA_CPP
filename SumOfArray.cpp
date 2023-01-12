/*
    sum of array
 */
#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    int sum = 0;
    cout << "Enter size of array: ";
    cin >> size;
    
    int arr[size];
    
    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    cout << "The sum of the array is: " << sum << endl;
    
    return 0;
}

