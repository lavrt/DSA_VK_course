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
    Node<T>* reverseLinkedList(Node<T>* head) {
        Node<T>* prev = nullptr;
        Node<T>* current = head;

        while (current != nullptr) {
            Node<T>* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
};

int main() {
    Node n1, n2, n3, n4;
    n1 = {1, &n2};
    n2 = {2, &n3};
    n3 = {3, &n4};
    n4 = {4, nullptr};

    std::cout << "forward list: ";
    for (const Node<int>* n = &n1; n != nullptr; n = n->next) {
        std::cout << n->data << " ";
    }
    std::cout << "\n";

    Solution s;

    std::cout << "reverse forward list: ";
    for (const Node<int>* n = s.reverseLinkedList(&n1); n != nullptr; n = n->next) {
        std::cout << n->data << " ";
    }
    std::cout << "\n";

    return 0;
}
