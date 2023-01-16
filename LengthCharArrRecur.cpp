/*
    Length of character array using recursion
 */
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

int lengthArray(char arr[]);

int main()
{
    char arr[100];
    
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    
    cout << "Length of " << arr << ": " << lengthArray(arr);
    cout << endl;
    
    return 0;
}

int lengthArray(char arr[])
{
    if(!arr[0]) return 0;
    
    int result = lengthArray(arr+1);
    
    return ++result;
}
