/*
    Reverse a character array
 */
#include <iostream>
using namespace std;

int Length(char name[]);
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

int Length(char name[])
{
    int size = 0;
    
    for(int i = 0; name[i]; i++) size++;
    
    return size;
}

void Reverse(char name[])
{
    int start = 0;
    int end = Length(name) - 1;
    
    while(start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}
