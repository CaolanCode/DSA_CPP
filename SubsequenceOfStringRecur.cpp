/*
    Print all subsequence of a string
 */
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

void printSub(string str, string output);
void storeSub(string str, string output, vector<string> store);

int main()
{
    string str = "";
    string output = "";
    vector<string> store;
    cout << "Enter string: ";
    getline(cin, str);
    
    printSub(str, output);
    storeSub(str, output, store);
    
    for(int i = 0; i < store.size(); i++) cout << store[i] << endl;
    
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

void storeSub(string str, string output, vector<string> store)
{
    if(str.length() == 0) {
        store.push_back(output);
        return;
    }
    printSub(str.substr(1), output);
    printSub(str.substr(1), output + str[0]);
}
