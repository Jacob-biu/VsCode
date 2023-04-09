/*** 
 * @Author: Jacob-biu 2777245228@qq.com
 * @Date: 2023-04-03 14:01:23
 * @LastEditors: Jacob-biu 2777245228@qq.com
 * @LastEditTime: 2023-04-03 14:16:25
 * @FilePath: \CPP\leetcode\2.两数相加.cpp
 * @Description: 
 * @Copyright (c) 2023 by Jacob John, All Rights Reserved. 
 */
/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<iostream>
using namespace std;

class Solution {
public:
    struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1== NULL && l2==NULL) return NULL;
        else if(l1 == NULL) return l2;
        else if(l2 == NULL) return l1;
        
        int a = l1->val + l2->val;
        ListNode * p = new ListNode(a%10);
        p->next = addTwoNumbers(l1->next,l2->next);
        if(a>=10){
            p->next = addTwoNumbers(p->next,new ListNode(1));
        }
        return p;
    }
};
// @lc code=end

