class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        size_t p1 = 0, p2 = 0;
        string res = "";

        while (p1 <= word1.size() - 1 && p2 <= word2.size() - 1) {
            res += word1[p1];
            res += word2[p2];
            p1++;
            p2++;
        }

        if (p1 == word1.size())
            res.append(word2, p2, word2.size() - 1);
        else
            res.append(word1, p1, word1.size() - 1);

        return res;
    }
};