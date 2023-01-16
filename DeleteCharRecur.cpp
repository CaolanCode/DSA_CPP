/*
    Delete character recursively
    and remove duplicates
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void deleteChar(char arr[], char letter);
void removeDuplicates(char arr[]);

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
    removeDuplicates(arr);
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
        deleteChar(arr, letter);
    }
    
    deleteChar(arr+1, letter);
}

void removeDuplicates(char arr[])
{
    if(!arr[0]) return;
    
    if(arr[0] == arr[1]) {
        for(int i = 0; arr[i]; i++)
        {
            arr[i] = arr[i+1];
        }
        removeDuplicates(arr);
    }
    removeDuplicates(arr+1);
}
