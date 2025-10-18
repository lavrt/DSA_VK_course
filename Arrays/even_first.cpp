#include <iostream>
#include <vector>

class Solution {
public:
    void evenFirst(std::vector<int>& arr) {
        size_t even_index = 0;

        for (int& num : arr) {
            if (num % 2 == 0) {
                int temp = num;
                num = arr[even_index];
                arr[even_index++] = temp;
            }
        }
    }
};

int main() {
    std::vector<int> v {1, 8, 5, 7, -4, 2, 0};

    Solution s;
    s.evenFirst(v);

    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
