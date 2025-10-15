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
