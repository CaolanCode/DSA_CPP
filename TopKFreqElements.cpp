/*
    Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;

vector<int> topKFrequent(vector<int>& nums, int k);

int main()
{
    vector<int> nums = {1};
    
    vector<int> result = topKFrequent(nums, 1);
    
    for(int i = 0; i < result.size(); i++) cout << result[i] << " ";
    cout << endl;
    
    return 0;
}

vector<int> topKFrequent(vector<int>& nums, int k)
{
    unordered_map<int, int> map;
    vector<int> result;
    int count = 0;
    int max = 0;
    int answer = 0;
    
    for(int i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
    }
    
    while(count < k)
    {
        max = 0;
        for(auto x : map)
        {
            if(x.second > max) {
                max = x.second;
                answer = x.first;
            }
        }
        count++;
        result.push_back(answer);
        map.erase(answer);
    }
    
    return result;
}
