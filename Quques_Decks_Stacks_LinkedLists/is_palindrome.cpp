#include <iostream> 

class Solution {
public:
    bool isPalindrome(const std::string& s) {
        for (int left = 0, right = s.size() - 1; left < right; ++left, --right) {
            if (s[left] != s[right]) {
                return false;
            }
        }
        
        return true;
    }
};

int main() {
    Solution s;
    
    std::cout << s.isPalindrome("arozaupalanalapuazora") << "\n";

    return 0;
}
