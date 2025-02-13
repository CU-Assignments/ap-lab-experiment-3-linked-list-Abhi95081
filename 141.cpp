
//Linked List Cycle
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
         if (head == nullptr) {
        return false;  
    }
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            return true; 
        }
    }
    
    return false; 
    }
};

*Test Cases*
  Input
head =
[3,2,0,-4]
pos =
1
Output
true
Expected
true
