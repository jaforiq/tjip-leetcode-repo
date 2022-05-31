class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* first = head;
        while(n--)
        {
            first = first -> next;
        }
        if(!first) return head -> next;

        while(first-> next)
        {
            slow = slow -> next;
            first = first -> next;
        }
        slow -> next = slow -> next -> next;
        return head;
    }
};
