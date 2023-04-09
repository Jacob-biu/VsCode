/*** 
 * @Author: Jacob-biu 2777245228@qq.com
 * @Date: 2023-04-03 02:15:06
 * @LastEditors: Jacob-biu 2777245228@qq.com
 * @LastEditTime: 2023-04-09 18:50:38
 * @FilePath: \VsCode\CPP\leetcode\1.两数之和.cpp
 * @Description: 双指针法
 * @Copyright (c) 2023 by Jacob John, All Rights Reserved. 
 */
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size()-1;i++){
            for (int j = nums.size()-1; j > i; j--)
            {
                /* code */
                if((nums[i]+nums[j])==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// @lc code=end

