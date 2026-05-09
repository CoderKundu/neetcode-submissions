class Solution {
public:
    bool isPalindrome(string s) {
         int l = 0, r = static_cast<int>(s.size()) - 1;
        while (l < r) {
            while (l < r && !std::isalnum(static_cast<unsigned char>(s[l]))) ++l;
            while (l < r && !std::isalnum(static_cast<unsigned char>(s[r]))) --r;
            if (l < r && std::tolower(static_cast<unsigned char>(s[l])) !=
                         std::tolower(static_cast<unsigned char>(s[r])))
                return false;
            ++l;
            --r;
        }
        return true;
    }
};
