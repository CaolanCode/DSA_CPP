/*
    check if s is a subsequence of t
 */
#include <iostream>
using std::cout;
using std::endl;
using std::string;

bool checkSubsequence(string s, string t);

int main()
{
    string s = "abc";
    string t = "aewbdscs";
    
    if(checkSubsequence(s, t)) cout << "It contains a subsequence\n";
    else cout << "It doesn't contain a subsequence\n";
    
    return 0;
}

bool checkSubsequence(string s, string t)
{
    int j = 0;
    
    for(int i = 0; i < t.size() && j < s.size(); i++)
    {
        if(s[j] == t[i]) j++;
    }
    
    if(j == s.size()) return true;
    
    return false;
}
