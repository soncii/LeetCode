    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL ||head->next==NULL) return head;
        ListNode* prev=head;
        ListNode* cur=head->next;
        while (cur){
            if (cur->val==prev->val) {
                cur=cur->next;
                prev->next=cur;
            } else {
                prev=cur;
                cur=cur->next;
                //prev=prev->next;
            }
        }
        return head;
    }
