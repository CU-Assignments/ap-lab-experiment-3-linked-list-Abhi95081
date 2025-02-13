//Rotate List
class Solution {
public:

    int size(ListNode* head){

        int count = 0;

        while(head != NULL){
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0) {
        return head; 
    }

    int n = size(head);
    k = k % n; 

    if (k == 0) {
        return head; 
    }

   
    ListNode* newTail = head;
    for (int i = 1; i < n - k; i++) {
        newTail = newTail->next;
    }

    ListNode* newHead = newTail->next; 
    newTail->next = NULL;            

    
    ListNode* oldTail = newHead;
    while (oldTail->next != NULL) {
        oldTail = oldTail->next;
    }
    oldTail->next = head;

    return newHead;
        
    }
};

*Test Cases*
  Input
head =
[1,2,3,4,5]
k =
2
Output
[4,5,1,2,3]
Expected
[4,5,1,2,3]
