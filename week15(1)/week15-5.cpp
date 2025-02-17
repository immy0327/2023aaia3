// week15-4.cpp 要用到上周第三題(加起來)、上上週第二題(倒過來)
//leetcode 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* l1) {
        vector<int> a; //伸縮自如的陣列
        while(l1 != nullptr){ //只要還有node
                a.push_back( l1->val );
                l1 = l1->next; //換下一筆
        } //先做 {倒過來}
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int N = a.size();
        for(int i=N-1;i>=0;i--){ //倒過來的for迴圈
            now->next = new ListNode(a[i]); //產生新的node
            now = now-> next; //換下一個
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        l1 =  myReverse(l1);
        l2 =  myReverse(l2);
        ListNode*ans = new ListNode();
        ListNode*now = ans;
        int carry = 0; 
        while(l1 != nullptr || l2 !=nullptr){
            if(l1==nullptr){
                int here =  l2->val + carry;
                now->next = new ListNode(here%10);
                carry = here/10;
                now = now->next;
                //l1 = l1->next;
                l2 = l2->next;

            }else if(l2==nullptr){
                int here = l1->val  + carry;
                now->next = new ListNode(here%10);
                carry = here/10;
                now = now->next;
                l1 = l1->next;
                //l2 = l2->next;

            }else{
                int here = l1->val + l2->val + carry;
                now->next = new ListNode(here%10);
                carry = here/10;
                now = now->next;
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        if(carry>0) now->next = new ListNode(carry);
        return myReverse(ans->next);
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