/*
    Print permutation of string
 */
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::swap;

void printPermutation(string str, int index);

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    printPermutation(str, 0);
    
    return 0;
}

void printPermutation(string str, int index)
{
    if(!str[index]) {
        cout << str << endl;
        return;
    }
    
    for(int j = index; str[j]; j++)
    {
        swap(str[index], str[j]);
        printPermutation(str, index + 1);
        swap(str[index], str[j]);
    }
    
}
