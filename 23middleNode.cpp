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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* low = head;
        bool check;
        while(fast != NULL){
            check = 0;
            head = low;
            low = low->next;
            fast = fast->next;
            if(fast != NULL){
                check = 1;
                fast = fast->next;
            }
                
        }
        
        return check == 0 ? head: low;
    }
};
