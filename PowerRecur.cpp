/*
    x^n using Recursion
 */
#include <iostream>
using namespace std;

int power(int x, int n);

int main()
{
    int x, n;
    x = n = 0;
    
    cout << "Enter base number: ";
    cin >> x;
    cout << "Enter exponant: ";
    cin >> n;
    
    int result = power(x, n);
    
    cout << result << endl;
    
    return 0;
}

int power(int x, int n)
{
    if(n == 0) return 1;
    
    int smallNumber = power(x, n - 1);
    
    return x * smallNumber;
}
