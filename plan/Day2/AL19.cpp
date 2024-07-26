// https://leetcode.com/problems/remove-nth-node-from-end-of-list
// 中国区：https://leetcode.cn/problems/remove-nth-node-from-end-of-list/

# include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode* slow = dummyHead;
        ListNode* fast = dummyHead;
        while(n-- && fast != nullptr) {
            fast = fast->next;
        }
        while(fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* tmp = slow->next;
        slow->next = slow->next->next;
        delete tmp;
        return dummyHead->next;
    }
};

int main()
{
    int n;
    int i;
    ListNode* dummyHead = new ListNode();
    ListNode* cur = dummyHead;
    cout << "Enter a linked list: ";
    while(cin >> i) {
        ListNode* newNode = new ListNode(i);
        cur->next = newNode;
        cur = cur->next;
        if (cin.get() == '\n') {
            break;
        }
    }
    cout << "Enter the integer n(remove nth node from the end): ";
    cin >> n;
    Solution obj;
    ListNode* result = obj.removeNthFromEnd(dummyHead->next, n);
    cout << "[";
    while(result != nullptr) {
        cout << result->val;
        result = result->next;
        if (result != nullptr) {
            cout << " ";
        }
    }
    cout << "]";
}