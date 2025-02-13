// Merge Two Sorted Lists

class Solution {
public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode dummy(0);  
    ListNode* tail = &dummy;  

    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;  
    }
};

**Test Cases**
  Input
list1 =
[1,2,4]
list2 =
[1,3,4]
Output
[1,1,2,3,4,4]
Expected
[1,1,2,3,4,4]
