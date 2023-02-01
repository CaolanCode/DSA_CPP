/*
 Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
 */
#include <iostream>
#include <unordered_set>
#include <vector>
using std::cout;
using std::endl;
using std::unordered_set;
using std::vector;
using std::max;

int longestConsecutive(vector<int>& nums);
        
int main()
{
    vector<int> nums = {100,4,200,1,3,2};
    
    cout << longestConsecutive(nums) << endl;
    
    return 0;
}

int longestConsecutive(vector<int>& nums)
{
    unordered_set<int> set(nums.begin(), nums.end());
    
    int current = 1, ans = 0;
    for(int i = 0; i < set.size(); i++)
    {
        if(set.find(nums[i]-1) == set.end()) {
            while(set.find(nums[i] + current) != set.end())
                current++;
            
            ans = max(current, ans);
        }
    }
    
    return ans;
}
