/*
 Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
 */
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

vector<int> productExceptSelf(vector<int>& nums);
        
int main()
{
    vector<int> nums = {1,2,3,4};
    
    vector<int> result = productExceptSelf(nums);
    
    for(int i = 0; i < result.size(); i++) cout << result[i] << " ";
    cout << endl;
    
    return 0;
}

vector<int> productExceptSelf(vector<int>& nums)
{
    vector<int> temp(nums.size(), 1);
    int product = 1;
    
    for(int i = 0; i < nums.size()-1; i++)
    {
        product *= nums[i];
        temp[i+1] *= product;
    }
    
    product = 1;
    for(int i = nums.size()-1; i > 0; i--)
    {
        product *= nums[i];
        temp[i-1] *= product;
    }
    
    return temp;
}
