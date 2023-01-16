/*
    convert string to integer
 */
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int convertString(string str, int length);

int main()
{
    string str;
    cout << "Enter a number: ";
    getline(cin, str);
    
    cout << str << " converted to: " << convertString(str, str.length()) << endl;
    
    return 0;
}

int convertString(string str, int length)
{
    if(length == 0) return 0;
    
    int result = convertString(str, length-1);
    int lastDigit = str[length-1] - '0';
    
    return result * 10 + lastDigit;
}
