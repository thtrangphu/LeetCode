class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) 
            return 0;
        
        ListNode *twoNode = head;
        ListNode *node = head;
        
        while(twoNode != NULL && twoNode->next != NULL){
            twoNode = twoNode->next;
            if(twoNode == NULL) return 0;
            if(twoNode == node) 
                return 1;
            
            twoNode = twoNode->next;
            node = node->next;
           
            if(twoNode == node) 
                return 1;
        }
        
        return 0;
    }
};
