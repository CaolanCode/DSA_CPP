/*
    Replace a character in an array using recursion
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void replaceChar(char arr[], char a, char b);

int main()
{
    char arr[100];
    char a;
    char b;
    
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    cout << "Enter the letter you would like to replace: ";
    cin >> a;
    cout << "Enter the letter you would like to replace it with: ";
    cin >> b;
    
    replaceChar(arr, a, b);
    cout << arr << endl;
    
    
    return 0;
}

void replaceChar(char arr[], char a, char b)
{
    if(!arr[0]) return;
    
    if(arr[0] == a) arr[0] = b;
    
    replaceChar(arr+1, a, b);
}
