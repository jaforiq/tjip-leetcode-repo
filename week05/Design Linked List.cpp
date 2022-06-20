#include<bits/stdc++.h>
using namespace std;

class MyLinkedList {
public:
    const int DUMMY = INT_MIN;
    class link_list
    {
        public:
        int value;
        link_list* next;
        link_list(int val, link_list* nxt)
        {
            value = val;
            next = nxt;
        }
    };
    private:
    link_list* head;
    int length;
    public:
    MyLinkedList() {
        length = 0;
        head = new link_list(DUMMY, NULL);
    }

    int get(int index) {
        if(index < 0 || index >= length) return -1;
        link_list* curr = head -> next;
        while(index--)
        {
            curr = curr -> next;
        }
        return curr -> value;
    }

    void addAtHead(int val) {
         addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(length, val);
    }

    void addAtIndex(int index, int val) {
        if(index < 0 || index > length) return;
        link_list* curr = head;
        while(index--)
        {
            curr = curr -> next;
        }
        //auto new_node =
        auto temp = curr -> next;
        curr -> next = new link_list(val, NULL);
        curr -> next -> next = temp;
        length++;
    }

    void deleteAtIndex(int index) {
        if(index < 0 || index >= length) return;
        link_list* curr = head;
        while(index--)
        {
            curr = curr -> next;
        }
        auto will_be_delete = curr -> next;
        curr -> next = curr -> next -> next;
        delete(will_be_delete) ;
        length--;
    }
    void print()
    { //cout << "print\n";
        link_list* curr = head -> next;
        while(curr)
        {
            cout << curr -> value<< " ";
            curr = curr -> next;
        }
    }
};

int main()
{
    MyLinkedList* obj = new MyLinkedList();
    obj -> addAtHead(1);
    obj -> addAtTail(3);
    obj -> addAtIndex(1,2);
    obj -> print();
}
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

/*class MyLinkedList {
public:
    const static int DUMMYVALUE = INT_MIN;
    class LinkedListNode
    {
    public:
        int value;
        LinkedListNode* next;
        LinkedListNode(int val, LinkedListNode* nxt)
        {
            value = val;
            next = nxt;
        }
    };
private:
    LinkedListNode* head;
    int len;
public:
    MyLinkedList() {
        len = 0;
        head = new LinkedListNode(DUMMYVALUE, NULL);
    }

    int get(int index) {
        if (index < 0 || index >= len) return -1;
        auto curr = head->next;
        while(index--)
        {
            curr = curr->next;
        }
        return curr->value;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(len, val);
    }

    void addAtIndex(int index, int val){
        if (index < 0 || index > len) return;
        auto curr = head;
        while(index--)
        {
            curr = curr->next;
        }
        auto jointNode = curr->next;
        curr->next = new LinkedListNode(val, NULL);
        curr->next->next = jointNode;
        len++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= len) return;
        auto curr = head;
        while(index--)
        {
            curr = curr->next;
        }
        auto dumpNode = curr->next;
        curr->next = curr->next->next;
        delete(dumpNode);
        len--;
    }
};*/
