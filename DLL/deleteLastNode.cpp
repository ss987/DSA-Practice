Node * deleteLastNode(Node *head) {
    // Write your code here
    Node* ptr=head;
    if(head->next==nullptr){
        return nullptr;
    }
    while(ptr->next->next!=nullptr){
        ptr=ptr->next;
    }
    ptr->next=nullptr;
    return head;
}
