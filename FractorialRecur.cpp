/*
    Factorial of n using recursion
 */
#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int n, result;
    n = result = 0;
    cout << "Enter the number you would like the factorial of: ";
    cin >> n;
    
    result = fact(n);
    cout << result << endl;
    
    return 0;
}

int fact(int n)
{
    if(n < 0) return -1;
    if(n == 1) return 1;
    int smallAns = fact(n-1);
    return n * smallAns;
}
