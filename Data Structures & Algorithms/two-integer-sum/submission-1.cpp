class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {

            int comp = target - nums[i];

            auto it = seen.find(comp);

            if (it != seen.end()) {

                vector<int> result = {it->second, i};
                return result;

            }
            
            seen.emplace(nums[i], i);

        }

        return {};

    }

};
