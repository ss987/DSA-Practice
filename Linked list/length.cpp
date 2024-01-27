int length(Node *head)
{
	//Write your code here
    int count=0;
    Node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        count++;
    }
    return count+1;
}
