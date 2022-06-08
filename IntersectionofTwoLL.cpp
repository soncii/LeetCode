    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        int la=0, lb=0;
        while (a->next){
            la++;
            a=a->next;
        }
        while (b->next){
            lb++;
            b=b->next;
        }
        
        if (a!=b) return 0;
        if (la>lb) {a=headA; b=headB;} else {swap(la,lb); a=headB; b=headA;}
        while (la>lb) {
            la--;
            a=a->next;
        }
        while (a->next) {
            if (a==b) return a;
            a=a->next;
            b=b->next;
        }
        if (a==b) return a;
        return 0; 
    }
