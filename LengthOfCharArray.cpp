/*
    Return the length of a character array
 */
#include <iostream>
using namespace std;

int LengthOfName(char name[]);

int main()
{
    char name[100];
    cout << "Enter your first name: ";
    cin.getline(name, 100);
    
    cout << "Length of name is: " << LengthOfName(name) << endl;
    
    return 0;
}

int LengthOfName(char name[])
{
    int size = 0;
    
    for(int i = 0; name[i]; i++) size++;
    
    return size;
}
