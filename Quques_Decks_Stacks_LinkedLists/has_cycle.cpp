#include <iostream>

template <typename T = int>
class Node {
public:
    T data;
    Node* next;
};

template <typename T = int>
class Solution {
public:
    bool hasCycle(const Node<T>* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        const Node<T>* slow = head;
        const Node<T>* fast = head->next;       

        while (slow != fast) {
            if (fast == nullptr || fast->next == nullptr) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }

        return true;
    }
};

int main() {
    Node n1, n2, n3, n4, n5, n6, n7, n8;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next = &n3;

    Solution s;
    std::cout << s.hasCycle(&n1) << "\n";
    
    return 0;
}
