/*
    Return true if a string is a valid anagram of another
 */
#include <iostream>
#include <unordered_map>

using std::cout;
using std::endl;
using std::string;
using std::unordered_map;

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
    
    unordered_map<char, int> s2, t2;
    
    // [char, number of occurances]
    for(int i = 0; i < s.size(); i++)
    {
        s2[s[i]]++;
        t2[t[i]]++;
    }
    
    if(s2 == t2) return true;
    
    return false;
}
