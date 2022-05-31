ListNode* reverseList(ListNode* head) {
         //cur, prev,nex;
        if (head==NULL || head->next==NULL) return head;
        ListNode* prev=head;
        ListNode* cur=head->next;
        ListNode* nex=cur->next;
        while (nex!=NULL) {
            cur->next=prev;
            prev=cur;
            cur=nex;
            nex = nex->next;
        }
        cur->next=prev;
        head->next=NULL;
        return cur;
        
    }
