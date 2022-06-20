

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        auto curr = head;
        ListNode* prv = NULL;
        while(curr)
        {
            auto next = curr -> next;
            curr -> next = prv;
            prv = curr;
            curr = next;
        }
        return prv;
    }
};


/**
class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* prv = NULL) {
        if(!head ) return prv;
        auto next = head -> next;
        head -> next = prv;
        return reverseList(next, head);
    }
};
*/
