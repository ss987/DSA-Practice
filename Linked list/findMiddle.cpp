/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    Node* t1 = head;
    Node* t2 = head;

    while (t2 != nullptr && t2->next != nullptr) {
        t1 = t1->next;
        t2 = t2->next->next;
    }
    return t1;
}

