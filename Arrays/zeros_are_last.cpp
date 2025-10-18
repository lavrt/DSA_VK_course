#include <iostream>
#include <vector>

class Solution {
public:
    void zerosAreLast(std::vector<int>& arr) {
        size_t zero_pos = arr.size() - 1;

        for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
            if (!*it) {
                *it = arr[zero_pos];
                arr[zero_pos--] = 0;
            }
        }
    }
};

int main() {
    std::vector<int> v {1, 5, 7, 8, 0, 1, 0, 7, 5, 0};

    Solution s;
    s.zerosAreLast(v);

    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
