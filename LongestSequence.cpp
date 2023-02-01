/*
 Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
 */
#include <iostream>
#include <set>
#include <vector>
using std::cout;
using std::endl;
using std::set;
using std::vector;
using std::max;

int longestConsecutive(vector<int>& nums);
        
int main()
{
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    
    cout << longestConsecutive(nums) << endl;
    
    return 0;
}

int longestConsecutive(vector<int>& nums)
{
    set<int> set(nums.begin(), nums.end());
    
    int current = 1, ans = 0;
    for(auto i = set.begin(); i != set.end(); i++)
    {
        int ele = *i;
        if(set.find(ele - 1) == set.end()) {
            while(set.find(ele + current) != set.end())
                current++;
            
            ans = max(current, ans);
        }
    }
    
    return ans;
}
