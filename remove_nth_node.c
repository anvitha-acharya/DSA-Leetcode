/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    struct ListNode* temp_n = head;
    while(n--)
        temp_n = temp_n->next;
    if(temp_n == NULL)
        return temp->next;
    while(temp_n->next!=NULL){
        temp_n =  temp_n->next;
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
