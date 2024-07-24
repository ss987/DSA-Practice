void merge(ListNode* l1,ListNode* l2){        
        while(l1!=NULL && l2!=NULL){
            ListNode* p1=l1->next;
            ListNode* p2=l2->next;
            l1->next=l2;
             if (p1 == NULL) break;
            l2->next=p1;
            l1=p1;
            l2=p2;
        }

    }
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* front;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(curr!=NULL){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        ListNode* l1 = head;
        ListNode* l2 = reverse(slow);
        
        merge(l1, l2);
    }
