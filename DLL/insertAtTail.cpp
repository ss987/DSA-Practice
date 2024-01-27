Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node* temp=new Node(k);
    if(head==nullptr){
        return temp;
    }
    Node* ptr=head;
    while(ptr->next!=nullptr){
        ptr=ptr->next;
    }
    
    ptr->next=temp;
    temp->prev=ptr;
    return head;
}
