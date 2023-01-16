/*
    Delete character recursively
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void deleteChar(char arr[], char letter);

int main()
{
    char arr[100];
    char letter;
    cout << "Enter string: ";
    cin.getline(arr, 100);
    cout << "Enter character to delete: ";
    cin >> letter;
    
    deleteChar(arr, letter);
    cout << arr << endl;
    
    return 0;
}

void deleteChar(char arr[], char letter)
{
    if(!arr[0]) return;
    
    if(arr[0] == letter) {
        for(int i = 0; arr[i]; i++)
        {
            arr[i] = arr[i+1];
        }
    }
    
    deleteChar(arr+1, letter);
}
