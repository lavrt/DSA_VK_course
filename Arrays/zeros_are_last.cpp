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
