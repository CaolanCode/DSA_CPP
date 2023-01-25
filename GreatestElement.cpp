/*
 Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.
 */
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

vector<int> greatest(vector<int>& arr);

int main()
{
    vector<int> arr = {17,18,5,4,6,1};
    
    greatest(arr);
    
    for(int i = 0; i < arr.size(); i++) cout << arr[i];
    cout << endl;
    
    return 0;
}

vector<int> greatest(vector<int>& arr)
{
    int size = arr.size()-1;
    if(size == 0) {
        arr[0] = -1;
        return arr;
    }
    int greatest = arr[size];
    int temp = 0;
    arr[size] = -1;
    
    for(int i = size-1; i >= 0; i--)
    {
        temp = arr[i];
        arr[i] = greatest;
        if(temp > greatest) {
            greatest = temp;
        }
    }
    
    return arr;
}
