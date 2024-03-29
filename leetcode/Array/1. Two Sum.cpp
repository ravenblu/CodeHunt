/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

/* Author: Jiayu Liu */
/* Time: 6/8/17 */

#include <vector>

//Solution 1
class Solution {
public:
    vector<int> TwoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0; i<nums.size(); i++) {
            for(int j = 0; j<nums.size(); j++) {
                if(nums[i]+nums[j]==target) {
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
    }
};

//Solution 2, good one!
class Solution {
public:
    vector<int> TwoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0; i<nums.size(); i++) {
            for(int j = i+1; j<nums.size(); j++) {
                if(nums[i]+nums[j]==target) {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};

//Solution 2
class Solution {
public:
    vector<int> TwoSum(vector<int>& nums, int target) {
        vector<int> res;
        bool flag = false;
        for(int i = 0; i<nums.size(); i++) {
            for(int j = 0; j<nums.size(); j++) {
                if(i!=j && nums[i]+nums[j]==target) {
                    res.push_back(i);
                    res.push_back(j);
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        return res;
    }
};