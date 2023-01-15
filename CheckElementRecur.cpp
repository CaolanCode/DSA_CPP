/*
    Check for element in array using recursion
 */
#include <iostream>
using namespace std;

bool checkElement(int arr[], int size, int number);

int main()
{
    int number = 0;
    int arr[] = {1,2,3,4,5};
    
    cout << "Enter number to search: ";
    cin >> number;
    
    if(checkElement(arr, 5, number)) cout << number << " is in the array\n";
    else cout << number << " is not in the array\n";
    
    return 0;
}

bool checkElement(int arr[], int size, int number)
{
    if(size == 0) return false;
    if(arr[0] == number) return true;
    
    return checkElement(arr+1, size-1, number);
}
