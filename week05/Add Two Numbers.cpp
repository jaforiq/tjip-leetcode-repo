class Solution {

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* curr = head;
        int carry = 0;

        while(l1 || l2 || carry)
        {
            int value=0;
            if(l1){
              value += l1->val;
              l1 = l1 -> next;
            }
            if(l2)
            {
                value += l2->val;
                l2 = l2 -> next;
            }
           curr-> next = new ListNode((value+carry)%10, NULL);
            curr = curr -> next;
            carry = (value + carry)/10;
        }
        return head -> next;
    }
};
