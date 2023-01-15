/*
    Count the occurance of an element in an array using recursion
 */
#include <iostream>
#include <vector>
using namespace std;

int countOccurance(int arr[], int size, int number);
void storeIndexPos(int arr[], int size, int number, vector<int> &positions, int index);

int main()
{
    int number = 0;
    vector<int> positions;
    int arr[] = {1,2,3,2,3,5,5};
    
    cout << "Enter a number to check for in the array: ";
    cin >> number;
    
    cout << number << " occurs " << countOccurance(arr, 7, number) << " times\n";
    
    storeIndexPos(arr, 7, number, positions, 0);
    cout << number << " is in index: ";
    for(int i = 0; i < positions.size(); i++) cout << positions[i] << " ";
    cout << endl;
    
    return 0;
}

int countOccurance(int arr[], int size, int number)
{
    if(size == 0) return 0;
    
    int result = countOccurance(arr+1, size-1, number);
    
    if(arr[0] == number) result++;
    
    return result;
}

void storeIndexPos(int arr[], int size, int number, vector<int> &positions, int index)
{
    if(size == 0) return;
    if(arr[0] == number) positions.push_back(index);
    
    storeIndexPos(arr+1, size-1, number, positions, index+1);
}

