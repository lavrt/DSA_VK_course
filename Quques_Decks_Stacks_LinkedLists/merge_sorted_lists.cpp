#include <iostream>

template <typename T = int>
class Node {
public:
    T data;
    Node* next;

    Node(T val) : data(val), next(nullptr) {}
};

template <typename T = int>
class Solution {
public:
    Node<T>* mergeSortedLists(Node<T>* l1, Node<T>* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        
        Node<T>* head = nullptr;
        Node<T>* tail = nullptr;
        
        if (l1->data <= l2->data) {
            head = l1;
            l1 = l1->next;
        } else {
            head = l2;
            l2 = l2->next;
        }
        tail = head;
        
        while (l1 && l2) {
            if (l1->data <= l2->data) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        
        if (l1) {
            tail->next = l1;
        } else {
            tail->next = l2;
        }
        
        return head;
    };
};

int main() {
    Node a1(1), a2(2), a3(3);
    a1.next = &a2;
    a2.next = &a3;

    Node b1(0), b2(2), b3(7), b4(8);
    b1.next = &b2;
    b2.next = &b3;
    b3.next = &b4;

    std::cout << "first list: ";
    for (const Node<int>* n = &a1; n != nullptr; n = n->next) {
        std::cout << n->data << " ";
    }
    std::cout << "\n";

    std::cout << "second list: ";
    for (const Node<int>* n = &b1; n != nullptr; n = n->next) {
        std::cout << n->data << " ";
    }
    std::cout << "\n";

    Solution s;

    std::cout << "merged list: ";
    for (const Node<int>* n = s.mergeSortedLists(&a1, &b1); n != nullptr; n = n->next) {
        std::cout << n->data << " ";
    }
    std::cout << "\n";

    return 0;
}
