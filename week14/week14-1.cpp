///2. Add Two Numbers 兩數相加 最多100位(未完成)
//week14-1.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans = new ListNode(); //準備好新答案
        ListNode * now = ans; //現在 要處理的node
        while(l1 != nullptr){ //把list 1 都複製到ans 的 now 裡
            now->next = new ListNode(l1->val); // 新準備一個值
            now = now->next; //換下一章
            l1 = l1->next; //換下一章
        }
        return ans->next;

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