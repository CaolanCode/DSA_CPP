/*
    Print up to a number using recursion
 */
#include <iostream>
using namespace std;

int printCount(int n);

int main()
{
    int n = 0;
    cout << "Enter a number to count up to: ";
    cin >> n;
    
    int result = printCount(n);
    cout << result << endl;
    
    return 0;
}

int printCount(int n)
{
    if(n == 1) return 1;
    
    int smallNumber = printCount(n - 1);
    cout << smallNumber << " ";
    
    return smallNumber + 1;
}
