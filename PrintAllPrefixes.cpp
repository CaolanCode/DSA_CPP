/*
    Print all prefixes of a character array
 */
#include <iostream>
using namespace std;

void PrintPrefixes(char arr[]);
void PrintSuffixes(char arr[]);

int main()
{
    char arr[100];
    cout << "Enter string: ";
    cin.getline(arr, 100);
    
    PrintPrefixes(arr);
    PrintSuffixes(arr);
    
    return 0;
}

void PrintPrefixes(char arr[])
{
    for(int i = 0; arr[i]; i++)
    {
        for(int j = 0; j <= i; j++) cout << arr[j];
        cout << endl;
    }
}

void PrintSuffixes(char arr[])
{
    for(int i = strlen(arr)-1; i >= 0; i--)
    {
        for(int j = strlen(arr)-1; j >= i; j--) cout << arr[j];
        cout << endl;
    }
}
