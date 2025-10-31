#include <iostream>

template <typename T = int>
class Solution {
public:
    bool isSubsequence(const std::string& a, const std::string& b) {
        size_t i, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                ++i;
            }
            ++j;
        }

        return i == a.size();
    }
};

int main() {
    std::string a = "abd";
    std::string b = "abcd";

    Solution s;

    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << s.isSubsequence(a, b) << "\n";

    return 0;
}
