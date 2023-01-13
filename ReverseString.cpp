/*
    Reverse a character array
 */
#include <iostream>
#include <cstring>
using namespace std;

void Reverse(char name[]);

int main()
{
    char name[100];
    cout << "Enter your first name: ";
    cin.getline(name, 100);
    
    cout << "Your name is: " << name << endl;
    Reverse(name);
    cout << "Your name reversed is: " << name << endl;
    
    return 0;
}


void Reverse(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;
    
    while(start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}
