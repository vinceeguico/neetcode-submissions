class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";

        for (size_t i = 0; i < strs[0].size(); i++) {
            for (size_t j = 1; j < strs.size(); j++) {
                if (strs[j][i] != strs[0][i]) {
                    return pre;
                }
            }
            pre += strs[0][i];
        }

        return pre;
    }
};