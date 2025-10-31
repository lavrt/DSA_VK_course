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
    Node<T>* middleNode(Node<T>* head) {
        Node<T>* slow {head};
        Node<T>* fast {head};

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
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
    
    std::cout << "middle node: " << s.middleNode(&n1)->data << "\n";

    return 0;
}
