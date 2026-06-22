class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> check;
        
        for (size_t i = 0; i < size(nums); i++) {

            auto [it, inserted] = check.emplace(nums[i]);
            if (!inserted) return true;

        }

        return false;

    }
};