// https://leetcode.com/problems/swap-nodes-in-pairs
// 中国区：https://leetcode.cn/problems/swap-nodes-in-pairs/

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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0, head);
        ListNode* cur = dummyHead;
        while(cur->next != nullptr && cur->next->next != nullptr) {
            ListNode* tmp1 = cur->next;
            ListNode* tmp2 = cur->next->next->next;
            cur->next = tmp1->next;
            cur->next->next = tmp1;
            cur->next->next->next = tmp2;
            cur = tmp1;
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};

int main()
{
    int i;
    ListNode* dummyHead = new ListNode(0);
    ListNode* cur = dummyHead;
    cout << "Enter the linked list(nullptr enter -1): ";
    while(cin >> i) {
        if (i != -1) {
            ListNode* newNode = new ListNode(i);
            cur->next = newNode;
            cur = cur->next;
        }
        if (cin.get() == '\n') {
            break;
        }
    }
    Solution obj;
    ListNode* result = obj.swapPairs(dummyHead->next);
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