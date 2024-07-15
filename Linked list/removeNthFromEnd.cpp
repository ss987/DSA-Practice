ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *p1=dummy,*p2=dummy;
        for(int i=0;i<n;i++){
            p1=p1->next;
        }
        while(p1->next!=NULL){
            p1=p1->next;
            p2=p2->next;
        }
        ListNode * delnode=p2->next;
        p2->next=p2->next->next;
        ListNode *newhead = dummy->next;
        delete delnode;
        delete dummy;
        return newhead;
    }
