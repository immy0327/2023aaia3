///week12-2.cpp
///21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ///ListNode* ans = list1; 宣告答案，(1)亂接list1
        ///ListNode* ans = new ListNode(99); //(2)新增 值是99
        ListNode* ans = new ListNode(99, new ListNode(88));
        ///(3) 新增1個 值是99 且右邊又 新增一個1
        return ans;
    }
};
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
