/*
    Find the geometric sum of k
 */
#include <iostream>
#include <math.h>
using namespace::std;

double gSum(int k);

int main()
{
    int k = 0;
    
    cout << "Enter a number: ";
    cin >> k;
    
    cout << "The geometric sum of " << k << " is " << gSum(k) << endl;
    
    return 0;
}

double gSum(int k)
{
    if(k == 0) return 1;
    
    double result = gSum(k - 1);
    
    return result + 1/ pow(2, k);
}
