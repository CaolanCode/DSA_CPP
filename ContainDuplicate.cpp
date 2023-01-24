/*
    check if array contains duplicates
 */
#include <iostream>
#include <unordered_set>

using std::unordered_set;
using std::cout;
using std::endl;

bool duplicates(int arr[], int arraySize);

int main()
{
    int arr[] = {1,1,3,3,4,4,5,5};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    
    if(duplicates(arr, arraySize)) {
        cout << "Contains duplicates\n";
    } else {
        cout << "Doesn't contain duplicates\n";
    }
    
    return 0;
}

bool duplicates(int arr[], int arraySize)
{
    unordered_set<int> st;
    
    for(int i = 0; i < arraySize; i++)
    {
        st.insert(arr[i]);
    }
    
    if(st.size() < arraySize) return true;
        
    return false;
}
