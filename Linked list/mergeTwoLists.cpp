/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head;
        ListNode* ptr;
        ListNode* p1=list1;
        ListNode* p2=list2;
        if (p1 != nullptr && (p2 == nullptr || p1->val <= p2->val)) {
            head = p1;
            p1 = p1->next;
        } else if (p2 != nullptr) {
            head = p2;
            p2 = p2->next;
        }
        ptr=head;
        while(p1!=nullptr && p2!=nullptr){
            ListNode* temp;
            if(p1->val<=p2->val){
                temp=p1;                
                p1=p1->next;
            }
            else{
                temp=p2;
                p2=p2->next;
            }
           if (ptr != nullptr) {
                ptr->next = temp;
                ptr = temp;
            }
        }
        while (p1 != nullptr) {
            if (ptr != nullptr) {
                ptr->next = p1;
                ptr = p1;
            }
            p1 = p1->next;
        }

        while (p2 != nullptr) {
            if (ptr != nullptr) {
                ptr->next = p2;
                ptr = p2;
            }
            p2 = p2->next;
        }
        return head;
    }
};
