/*
    Check if array is palidrome using recursion
 */
#include <iostream>
using namespace std;

bool checkPalindrome(int arr[], int start, int end);

int main()
{
    int arr[] = {1,2,3,4,4,3,2,1};
    
    if(checkPalindrome(arr, 0, 7)) {
        cout << "The array is a palindrome\n";
    } else cout << "The array is not a palindrome\n";
    
    return 0;
}

bool checkPalindrome(int arr[], int start, int end)
{
    bool result;
    if(start > end) return true;
    
    if(arr[start] == arr[end]) {
        result = checkPalindrome(arr, start+1, end-1);
    } else return false;
    
    return result;
}
