// https://leetcode.com/problems/design-linked-list
// 中国区：https://leetcode.cn/problems/design-linked-list/

# include <iostream>
# include <vector>
using namespace std;

class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int val) : val(val), next(nullptr){}
    };

    MyLinkedList() {
        dummyHead = new LinkedNode(0);
        size = 0;
    }
    
    int get(int index) {
        if (index >= size || index < 0) {
            return -1;
        }
        LinkedNode* cur = dummyHead->next;
        while (index--) {
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = dummyHead->next;
        dummyHead->next = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = dummyHead;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size || index < 0) return;
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = dummyHead;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index >= size || index < 0) return;
        LinkedNode* cur = dummyHead;
        while (index--) {
            cur = cur->next;
        }
        LinkedNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        size--;
    }

private:
    int size;
    LinkedNode* dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main()
{
    MyLinkedList* obj = nullptr;
    int instruction = 0;
    
    while (true) {
        cout << "1. MyLinkedList" << endl;
        cout << "2. get" << endl;
        cout << "3. addAtHead" << endl;
        cout << "4. addAtTail" << endl;
        cout << "5. addAtIndex" << endl;
        cout << "6. deleteAtIndex" << endl;
        cout << "7. exit" << endl;
        cout << "Enter the instruction number: ";

        cin >> instruction;

        if (instruction == 1) {
            // MyLinkedList 
            obj = new MyLinkedList();
            cout << "Output: null" << endl;
        } else if (instruction >= 2 && instruction <= 6) {
            if (obj == nullptr) {
                cout << "Output: Error - Please create a linked list first (Instruction 1)." << endl;
                continue;
            }

            cout << "Enter the parameter: ";

            if (instruction == 2) { 
                // get
                int index;
                cin >> index;
                int val = obj->get(index);
                cout << "Output: " << val << endl;

            } else if (instruction == 3) {
                // addAtHead
                int val;
                cin >> val;
                obj->addAtHead(val);
                cout << "Output: null" << endl;

            } else if (instruction == 4) {
                // addAtTail
                int val;
                cin >> val;
                obj->addAtTail(val);
                cout << "Output: null" << endl;

            } else if (instruction == 5) {
                // addAtIndex
                int index, val;
                cin >> index >> val;
                obj->addAtIndex(index, val);
                cout << "Output: null" << endl;

            } else if (instruction == 6) { 
                // deleteAtIndex
                int index;
                cin >> index;
                obj->deleteAtIndex(index);
                cout << "Output: null" << endl;
            }
        } else if (instruction == 7) {
            break;
        } else {
            cout << "Invalid Instruction. Please try again." << endl; 
        }

        cout << endl;
    }
}