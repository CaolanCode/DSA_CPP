/*
    Return true if a string is a valid anagram of another
 */
#include <iostream>

using std::cout;
using std::endl;
using std::string;

bool anagram(string s, string t);

int main()
{
    string s = "anagram";
    string t = "nagaram";
    
    if(anagram(s, t)) cout << "Strings are an anagram\n";
    else cout << "Strings are not an anagram\n";
    
    return 0;
}

bool anagram(string s, string t)
{
    if(s.size() != t.size()) return false;
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != t[i]) return false;
    }
    
    return true;
}
