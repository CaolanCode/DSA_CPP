/*
 Given an array of strings strs, group the anagrams together. You can return the answer in any order.
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::unordered_map;

vector<vector<string> > groupAnagrams(vector<string>& strs);
        
int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
     
    vector<vector<string> > anagrams = groupAnagrams(strs);
    
    for(int i = 0; i < anagrams.size(); i++)
    {
        for(int j = 0; j < anagrams[i].size(); j++) cout << anagrams[i][j] << ", ";
        cout << endl;
    }
    
    return 0;
}

vector<vector<string> > groupAnagrams(vector<string>& strs)
{
    int size = strs.size();
    
    unordered_map<string, vector<string> > map;
    vector<vector<string> > result;
    
    for(int i = 0; i < size; i++)
    {
        string key = strs[i];
        sort(key.begin(), key.end());
        map[key].push_back(strs[i]);
    }
    
    for(auto x : map) result.push_back(x.second);
    
    return result;
}
