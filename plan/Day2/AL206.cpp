// https://leetcode.com/problems/reverse-linked-list
// 中国区：https://leetcode.cn/problems/reverse-linked-list

# include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next){}
};

/*
// version 1: Two-pointer approach(iteratively)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        while (head != nullptr) {
            ListNode* tmp = head->next;
            head->next = pre;
            pre = head;
            head = tmp;
        }
        return pre;
    }
};
*/

/*
// version 2: Recurssion(from head to tail)

class Solution {
public:
    ListNode* reverse(ListNode* pre, ListNode* head) {
        if (head == nullptr) return pre;
        ListNode* tmp = head->next;
        head->next = pre;
        return reverse(head, tmp);
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(nullptr, head);
    }
};
*/

// version 3: Recurssion(from tail to head)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return head;
        ListNode *last = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return last;
    }
};

// Another versions: 
// dummy head node
// stack

int main()
{
    ListNode *head = nullptr, *tail = nullptr;
    cout << "Enter a singly linked list: ";
    int num;
    while (cin >> num) {
        ListNode* newNode = new ListNode(num);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        if (cin.get() == '\n') {
            break;
        }
    }
    Solution obj;
    head = obj.reverseList(head);
    cout << "The reversed list: [";
    ListNode* cur = head;
    while (cur != nullptr) {
        cout << cur->val;
        cur = cur->next;
        if (cur != nullptr) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

