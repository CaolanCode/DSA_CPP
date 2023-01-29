/*
 Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

 Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
 */
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int removeElement(vector<int>& nums, int val);

int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    
    int size = removeElement(nums, 2);
    
    for(int i = 0; i < size; i++) cout << nums[i];
    cout << endl;
    
    return 0;
}

int removeElement(vector<int>& nums, int val)
{
    int k = 0;
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}
