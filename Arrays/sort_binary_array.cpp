#include <iostream>
#include <vector>

class Solution {
public:
    void sortBinaryArray(std::vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            if (nums[l]) {
                int temp = nums[r];
                nums[r] = 1;
                nums[l] = temp;
                r--;
            } else {
                l++;
            }
        }
    }
};

int main() {
    std::vector<int> v{1, 0, 1, 1, 1, 0, 0, 1};

    Solution s;
    s.sortBinaryArray(v);

    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
