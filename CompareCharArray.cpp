/*
    compare two strings
 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char wordOne[100];
    char wordTwo[100];
    
    cout << "Enter the first word: ";
    cin.getline(wordOne, 100);
    cout << "Enter the second word: ";
    cin.getline(wordTwo, 100);
    
    if(strcmp(wordOne, wordTwo) == 0) cout << "Both words are equal" << endl;
    else cout << "Both words are not equal" << endl;
    
    return 0;
}
