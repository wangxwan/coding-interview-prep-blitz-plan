// https://leetcode.com/problems/remove-linked-list-elements
// 中国区：https://leetcode.cn/problems/remove-linked-list-elements/

# include <iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/*
// version 1: Directly use the original linked list for the deletion operation

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Write a separate piece of logic to handle the case of removing the head node.
        while (head != nullptr && head->val == val) {
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }
        ListNode* cur = head;
        while  (cur != nullptr && cur->next != nullptr) {
            if (cur->next->val == val) {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};
*/

// version 2: Set up a dummy head node for performing the deletion

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else {
                cur = cur->next;
            }
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};


int main()
{
    ListNode *head = nullptr, *tail = nullptr;
    int num, val;
    cout << "Enter the link list: ";
    while (cin >> num) {
        ListNode* newNode = new ListNode(num);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        if(cin.get() == '\n') {
            break;
        }
    }
    cout << "Enter an integer(val): ";
    cin >> val;
    Solution obj;
    head = obj.removeElements(head, val);
    cout << "After removing " << val << ", the new linked list is: [";
    ListNode* cur = head;
    while (cur != nullptr) {
        cout << cur->val;
        cur = cur->next;
        if (cur != nullptr) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // Clean up the linked list (prevent memory leaks)
    cur = head;
    while (cur != nullptr) {
        ListNode* tmp = cur;
        cur = cur->next;
        delete tmp;
    }
}