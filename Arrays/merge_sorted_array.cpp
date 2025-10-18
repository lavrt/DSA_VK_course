#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int p1 = m - 1;
        int p2 = n - 1;
        int p3 = m + n - 1;

        while (p2 >= 0) {
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p3--] = nums1[p1--];
            } else {
                nums1[p3--] = nums2[p2--];
            }
        }
    }
};

int main() {
    std::vector<int> v1 {1, 5, 7, 8, 0, 0, 0};
    std::vector<int> v2 {12, 18, 20};

    Solution s;
    s.merge(v1, 4, v2, 3);

    for (int n : v1) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
