    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if (list1==NULL) {
            if (list2==NULL) return NULL; else return list2;
        }
        if (list2==NULL) return list1;
        if (list1->val>list2->val){
            swap(list1,list2);
        }
        ListNode* head = list1;
        while (list2!=NULL) {
            if (list1->next==NULL) {
                list1->next=list2;
                break;
            }
            if (list1->val<=list2->val && list2->val <= list1->next->val) {
                ListNode* temp=list1->next;
                list1->next=list2;
                list2=list2->next;
                list1->next->next=temp;
                list1=list1->next;
            } else list1=list1->next;
        }
        return head;
    }
