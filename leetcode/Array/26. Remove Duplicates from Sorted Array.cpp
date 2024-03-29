/*
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        if(nums.empty())
            return count;
        else {
            //at least we have one distinct number in the array
            count++;
            for(int i = 0; i < nums.size() - 1;) {
                if(nums[i]-nums[i+1] == 0) {
                    nums.erase(nums.begin() + i + 1);
                }
                else {
                    count++;
                    i++;
                }
            }
            return count;
        }
        
    }
};