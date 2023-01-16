/*
    Print all subsequence of a string
 */
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

void printSub(string str, string output);

int main()
{
    string str = "";
    string output = "";
    cout << "Enter string: ";
    getline(cin, str);
    
    printSub(str, output);
    
    return 0;
}

void printSub(string str, string output)
{
    if(str.length() == 0) {
        cout << output << endl;
        return;
    }
    printSub(str.substr(1), output);
    printSub(str.substr(1), output + str[0]);
}

//          bc               abc
//      c       bc      ac      abc
//   ""    c   b   bc  a   ac   ab   abc
