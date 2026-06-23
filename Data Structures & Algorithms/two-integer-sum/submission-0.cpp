class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> a;
        vector<int> b;

        for (int i = 0; i < nums.size(); i++) {

            int comp = target - nums[i];

            auto it = a.find(comp);

            if (it != a.end()) {

                b.push_back(it->second);
                b.push_back(i);
                break;

            }
            
            a.emplace(nums[i], i);

        }

        return b;

    }

};
