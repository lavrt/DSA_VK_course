#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];
            
            if (sum < target) {
                ++left;
            } else if (sum > target) {
                --right;
            } else {
                return {left, right};
            }
        }

        return {-1, -1};
    }
};

int main() {
    std::vector<int> v{1, 5, 7, 8, 10, 30, 90};

    Solution s;
    std::vector<int> ans = s.twoSum(v, 13);

    for (int n : ans) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
