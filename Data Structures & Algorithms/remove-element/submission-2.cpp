class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        size_t numr = 0, curr = 0, end = nums.size() - 1, count = 0;

        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] == val) numr++;
        }

        while (count < numr) {
            if (nums[curr] == val) {
                while (nums[end] == val && curr != end) {
                    end--;
                    count++;
                }
                int temp = nums[end];
                nums[end] = val;
                nums[curr] = temp;
                count++;
                end--;
            }
            curr++;
        }

        return nums.size() - numr;
    }
};