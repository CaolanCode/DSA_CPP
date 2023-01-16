/*
    Staircase problem, how many was can you get to n using 1, 2 or 3 steps
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int staircase(int n);

int main()
{
    int n = 0;
    cout << "Enter the value: ";
    cin >> n;
    
    cout << n << " has " << staircase(n) << " options\n";
    
    return 0;
}

int staircase(int n)
{
    if(n == 0 || n == 1) return 1;
    if(n == 2) return 2;
    
    return staircase(n-1) + staircase(n-2) + staircase(n-3);
}

