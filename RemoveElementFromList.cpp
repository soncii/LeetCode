    ListNode* removeElements(ListNode* head, int val) {
        if (head==NULL) return head;
        ListNode *prev=head, *cur=head->next;
        while(cur) {
            if (cur->val==val) {
                cur=cur->next;
                prev->next=cur;
            } else {
                prev=cur;
                cur=cur->next;
            }
        }
        if (head->val==val) return head->next; 
        return head;
        
    }
