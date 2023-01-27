/*
 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;

vector<int> twoSum(vector<int>& nums, int target);

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 18;
    
    vector<int> indices = twoSum(nums, target);
    
    for(int i = 0; i < 2; i++) cout << indices[i] << " ";
    
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> map; // value , index
    
    for(int i = 0; i < nums.size(); i++)
    {
        auto temp = map.find(target - nums[i]);
        if(temp != map.end()) return {temp->second, i};
        else map.insert({nums[i], i});
    }
    
    return {};
}
