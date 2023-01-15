/*
    Print positions of an element
 */
#include <iostream>
using namespace std;

void printPositions(int arr[], int size, int number, int index);

int main()
{
    int number = 0;
    int arr[] = {1,2,4,4,5,5};
    
    cout << "Enter number to search for: ";
    cin >> number;
    
    printPositions(arr, 6, number, 0);
    
    return 0;
}

void printPositions(int arr[], int size, int number, int index)
{
    if(index == size) return;
    
    if(arr[index] == number) cout << index << endl;
    
    printPositions(arr, size, number, index+1);
}
