
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        auto slow = head;
        auto first = head;  //cout << slow-> val<< " out\n";
        while(first-> next && first-> next -> next)
        {
            slow = slow -> next;
            first = first -> next -> next; //cout << slow->val << " in "<< first-> val<< "\n";
            if(slow == first) return true;
        }
        return false;
    }
};

/*class Solution {
public:
    unordered_map<ListNode*, int>counter;
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        counter[head]++;
        if(counter[head] == 2) return true;
        return hasCycle(head -> next);
    }
};*/
