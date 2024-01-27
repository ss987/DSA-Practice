int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int>* ptr=head;
    while(ptr!=NULL){
        if(ptr->data==k){
            return 1;
        }
        ptr=ptr->next;
        
    }
    return 0;
}
