/*
    Swap the value to two variables
 */
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    a = b = temp = 0;
    
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "The first value is now: " << a << endl;
    cout << "The second value is now: " << b << endl;
    
    return 0;
}
