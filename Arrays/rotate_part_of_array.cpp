#include <iostream>
#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        size_t n = nums.size();
        if (n == 0) {
            return;
        }

        k %= n;

        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }

private:
    void reverseArray(std::vector<int>& nums, int l, int r) {
        while (l < r) {
            int temp = nums[l];
            nums[l++] = nums[r];
            nums[r--] = temp;
        }
    }
};

int main() {
    std::vector<int> v{4, 5, -8, 1, 1, 0, 7};

    Solution s;
    s.rotate(v, 3);

    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
