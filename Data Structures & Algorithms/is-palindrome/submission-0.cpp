class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // Skip spaces and special characters from left
            if (!isalnum(s[left])) {
                left++;
                continue;
            }

            // Skip spaces and special characters from right
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            // Compare lowercase characters
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};