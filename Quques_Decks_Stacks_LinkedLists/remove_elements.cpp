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
    Node<T>* removeElements(Node<T>* head, T val) {
        Node<T> dummy;
        dummy.next = head;
        Node<T>* prev = &dummy;
        Node<T>* cur = head;
        
        while (cur != nullptr) {
            if (cur->data == val) {
                prev->next = cur->next;
            } else {
                prev = cur;
            }
            cur = cur->next;
        }

        return dummy.next;
    }
};

int main() {
    Node n1, n2, n3, n4, n5;
    n1 = {1, &n2};
    n2 = {2, &n3};
    n3 = {3, &n4};
    n4 = {4, &n5};
    n5 = {5, nullptr};

    std::cout << "forward list: ";
    for (const Node<int>* n = &n1; n != nullptr; n = n->next) {
        std::cout << n->data << " ";
    }
    std::cout << "\n";

    Solution s;
    s.removeElements(&n1, 3);

    std::cout << "forward list after removing element: ";
    for (const Node<int>* n = &n1; n != nullptr; n = n->next) {
        std::cout << n->data << " ";
    }
    std::cout << "\n";

    return 0;
}
