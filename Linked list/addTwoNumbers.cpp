ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL){
            return NULL;
        }
        ListNode* res=new ListNode(0);
        ListNode* ptr=res;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int d1=(l1!=NULL)?l1->val:0;
            int d2=(l2!=NULL)?l2->val:0;
            int s=d1+d2+carry;
            int d=s%10;
            carry=s/10;
            ListNode* newnode=new ListNode(d);
            ptr->next=newnode;
            ptr=ptr->next;
            l1=(l1!=NULL)?l1->next:NULL;
            l2=(l2!=NULL)?l2->next:NULL;
        }
        
        return res->next;
    }
