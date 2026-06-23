class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> chars;
        
        for (const char c : s) {

            chars[c]++;

        }

        for (const char c : t) {

            chars[c]--;

        }

        for (const auto it : chars) {

            if (it.second != 0) return false;

        }

        return true;
    }
};
