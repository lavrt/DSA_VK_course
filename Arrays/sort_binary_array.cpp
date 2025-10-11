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
