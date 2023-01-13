/*
    Return the length of a character array
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter your first name: ";
    cin.getline(name, 100);
    
    cout << "Length of name is: " << strlen(name) << endl;
    
    return 0;
}

