int countNodesinLoop(struct Node *head)
{
    // Code here
    int c=0,f=0;
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            f=1;
            break;
        }
    }
    if(f==0){
        return c;
    }else{
        while(slow->next!=fast){
            slow=slow->next;
            c++;
        }
    }
    return (c+1);
}
