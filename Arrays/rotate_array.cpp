#include <iostream>
#include <vector>

class Solution {
public:
    void reverseArray(std::vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int temp = nums[l];
            nums[l++] = nums[r];
            nums[r--] = temp;
        }
    }
};

int main() {
    std::vector<int> v {1, 8, 5, 7, -4, 2, 0};

    Solution s;
    s.reverseArray(v);

    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}

