/*
    Linear Search
 */
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int searchNum);

int main()
{
    int size, searchNum;
    size = searchNum = 0;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    
    
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a value: ";
        cin >> arr[i];
    }
    
    cout << "Enter a number to search in the array: ";
    cin >> searchNum;
    
    int pos = linearSearch(arr, size, searchNum);
    
    if(pos == -1) cout << searchNum << " was not found\n";
    else cout << searchNum << " is index " << pos << " in the list\n";
    
    return 0;
}

int linearSearch(int arr[], int size, int searchNum)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == searchNum)  return i;
    }
    
    return -1;
}
