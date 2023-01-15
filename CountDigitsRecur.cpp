/*
    Count number of digits in a number
    And sum of digits
 */
#include <iostream>
using namespace std;

int countDigits(int n);
int sumOfDigits(int n);

int main()
{
    int n = 0;
    
    cout << "Enter a number to count digits: ";
    cin >> n;
    
    cout << "Number of digits: " << countDigits(n) << endl;
    cout << "Sum of digits: " << sumOfDigits(n) << endl;
    
    return 0;
}

int countDigits(int n)
{
    int count = 0;
    if(n == 0) return 0;
    
    count = countDigits(n / 10);
    
    return count + 1;
}

int sumOfDigits(int n)
{
    int sum = 0;
    if(n == 0) return 0;
    
    sum = sumOfDigits(n / 10); // 123, 12, 1, 0
    
    return sum + n % 10;
}
