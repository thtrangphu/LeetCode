 // SỬ DỤNG ĐỆ QUY 
    bool isPalindrome(ListNode* head){
        ListNode *p = head;
        return checkPalindrome(p, head);
    }
    // phải thay đổi head để cập nhật lại vị trí cần xét
    bool checkPalindrome(ListNode *p, ListNode *&h){
        if(p ==  NULL) 
            return true;
        bool ans = checkPalindrome(p->next, h);
        
        if(p->val != h-> val)
            return false;
        
        h = h->next;
        return ans;
    }
