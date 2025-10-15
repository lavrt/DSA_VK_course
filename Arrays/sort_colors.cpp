#include <vector>

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int left = 0;
        int mid = 0;
        int right = nums.size() - 1;

        while (mid <= right) {
            if (nums[mid] == 0) {
                int temp = nums[left];
                nums[left++] = nums[mid];
                nums[mid++] = temp;
            } else if (nums[mid] == 1) {
                ++mid;
            } else if (nums[mid] == 2) {
                int temp = nums[right];
                nums[right--] = nums[mid];
                nums[mid] = temp;
            }
        }
    }
};
