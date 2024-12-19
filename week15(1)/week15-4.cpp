/ week15-4.cpp 要用到上周第三題(加起來)、上上週第二題(倒過來)
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