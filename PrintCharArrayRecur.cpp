/*
    Print char array using recursion
 */
#include <iostream>
using std::cout;
using std::endl;

void printArray(char arr[]);
void printArrayRev(char arr[]);

int main()
{
    char arr[] = "Hello, World!";
    
    printArray(arr);
    cout << endl;
    printArrayRev(arr);
    cout << endl;
    
    return 0;
}

void printArray(char arr[])
{
    if(!arr[0]) return;
    
    cout << arr[0];
    
    printArray(arr+1);
}

void printArrayRev(char arr[])
{
    if(!arr[0]) return;
    
    printArrayRev(arr+1);
    
    cout << arr[0];
}
