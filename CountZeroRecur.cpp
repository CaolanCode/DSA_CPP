/*
    Count zero in number using recursion
 */
#include <iostream>
using namespace std;

int countZeros(int n);

int main()
{
    int n = 0;
    cout << "Enter number: ";
    cin >> n;
    
    cout << n << " has " << countZeros(n) << " zeros\n";
    
    return 0;
}

int countZeros(int n)
{
    int result = 0;
    if(n == 0) return 0;
    
    result = countZeros(n / 10);
   
    if(n % 10 == 0) return ++result;
    
    return result;
}
