ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        int f=0;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                f=1;
                break;
            }
        }
        if(f==0){
            return NULL;
        }
        slow=head;
        while(slow!=fast){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
