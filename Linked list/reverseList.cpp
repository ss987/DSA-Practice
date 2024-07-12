ListNode* reverseList(ListNode* head) {
        if(!head)return NULL;
        if(head->next==NULL) return head;
        ListNode *prev=NULL,*curr=head,*front;
        while(curr!=NULL){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
