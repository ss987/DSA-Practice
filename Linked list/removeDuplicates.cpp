/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node* t1=head;
    Node* t2=head->next;
    while (t2 != nullptr) {
        if (t1->data != t2->data) {
            t1 = t2;
            t2 = t2->next;
        } else {
            Node* temp = t2;
            t2 = t2->next;

            if (t2 != nullptr) {
                t2->prev = t1;
            }

            t1->next = t2;
            delete temp;
        }
    }
    return head;
}
