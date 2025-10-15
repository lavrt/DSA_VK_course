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
