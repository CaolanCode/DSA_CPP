/*
    Fibonacci series using Recursion
 */
#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int n, result;
    n = result = 0;
    
    cout << "Enter a number to gets its fibonacci: ";
    cin >> n;
    
    result = fibonacci(n);
    cout << result << endl;
    
    return 0;
}

int fibonacci(int n)
{
    if(n == 1) return 1;
    if(n == 0) return 0;
    
    int minusOne = fibonacci(n - 1);    // 2, 1
    int minusTwo = fibonacci(n - 2);    // 0
    
    return minusOne + minusTwo;
}
