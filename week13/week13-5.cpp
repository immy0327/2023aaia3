//week13-5.cpp 
//21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);
        ListNode* now = ans;
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr) {
                now->next = list2;
                break;
            }else if(list2==nullptr){///比較小
                now->next =list1;
                break;
            
            }else if(list1->val < list2->val){///比較小
                now->next = new ListNode(list1->val);
                list1 = list1->next;
                now = now->next;
            }else{
                now->next = new  ListNode(list2->val);
                list2 = list2->next;
                now = now->next;
            }
        }
        return ans->next;
    }
};