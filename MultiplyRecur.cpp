/*
    Multiply the x by n
 */
#include <iostream>
using namespace std;

int multiply(int x, int n);

int main()
{
    int x, n;
    x = n = 0;
    
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number to multiply: ";
    cin >> n;
    
    cout << x << " * " << n << " = " << multiply(x, n) << endl;
    
    return 0;
}

int multiply(int x, int n)
{
    int result = 0;
    if(n == 0) return 0;
    
    result = multiply(x, n-1);
    
    return result + x;
}
