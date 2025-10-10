#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        size_t n = nums.size();
        k %= n;

        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }

    void reverseArray(std::vector<int>& nums, int l, int r) {
        while (l < r) {
            int temp = nums[l];
            nums[l++] = nums[r];
            nums[r--] = temp;
        }
    }
};
