class Solution {
public:
    Node* connect(Node* root) {
        Node* LeftStart = root;

        while(LeftStart && LeftStart-> left != NULL)
        {
            Node* curr = LeftStart;
            while(true)
            {
               curr -> left-> next = curr -> right;
                if(curr-> next == NULL) break;
                curr -> right -> next = curr -> next -> left;
                curr = curr -> next;
            }
            LeftStart = LeftStart -> left;
        }
        return root;
    }
};
