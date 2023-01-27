/*
 Write a function to find the longest common prefix string amongst an array of strings.
 */
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::string;

string longestCommonPrefix(vector<string>& strs);

int main()
{
    vector<string> strs = {"Flower", "Flow", "Flight"};
    
    cout << longestCommonPrefix(strs) << endl;
    
    return 0;
}

string longestCommonPrefix(vector<string>& strs)
{
    int min = INT_MAX, count = 0;
    string str;
    
    for(int i = 0; i < strs.size(); i++)
    {
        if(strs[i].length() < min) {
            min = strs[i].length();
            str = strs[i];
        }
    }
    
    for(int i = 0; i < min; i++)
    {
        for(int j = 0; j < strs.size(); j++)
        {
            if(strs[j][i] != str[i]) return str.substr(0, count);
        }
        count++;
    }
    
    return str.substr(0, count);
}
