class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> groups;

        for (string s : strs) {

            string copy = s;
            sort(copy.begin(), copy.end());
            
            anagrams[copy].push_back(s);

        }

        for (const auto& [s, group] : anagrams) groups.push_back(group);

        return groups;
    }
};
