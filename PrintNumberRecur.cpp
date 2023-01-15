/*
    Print up to a number using recursion
 */
#include <iostream>
using namespace std;

void printAscend(int n);
void printDescend(int n);

int main()
{
    int n = 0;
    cout << "Enter a number to count up to: ";
    cin >> n;
    
    printAscend(n);
    cout << endl;
    printDescend(n);
    cout << endl;
    
    return 0;
}

void printAscend(int n)
{
    if(n == 0) return;
    
    printAscend(n - 1);
    
    cout << n << " ";
}

void printDescend(int n)
{
    if(n == 0) return;
    
    cout << n << " ";
    
    printDescend(n - 1);
}
