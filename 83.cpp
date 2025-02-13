class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

    if (head == NULL) return NULL;

    ListNode* current = head;

    while (current->next != NULL) {
        if (current->val == current->next->val) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp; 
        } else {
            current = current->next;
        }
    }

    return head;
}
       
};
**Text Case**
// head =
// [1,1,2]
// Output
// [1,2]
// Expected
// [1,2]
