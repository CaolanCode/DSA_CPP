/*
 Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

 A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not)
 */
#include <iostream>
using std::cout;
using std::endl;
using std::string;

bool isSubsequence(string s, string t);

int main()
{
    string s = "abx";
    string t = "ahbgdc";
    
    if(isSubsequence(s, t)) cout << "It is a sequence\n";
    else cout << "It is not a sequence\n";
    
    return 0;
}

bool isSubsequence(string s, string t)
{
    int j = 0;
    
    for(int i = 0; i < t.length(); i++)
    {
        if(t[i] == s[j]) j++;
    }
    
    if(j == s.length()) return true;
    
    return false;
}
