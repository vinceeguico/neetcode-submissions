class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int red = 0, blue = nums.size() - 1;

        for (int i = 0; i <= blue; i++) {
            if (nums[i] == 0) {
                nums[i] = nums[red];
                nums[red] = 0;
                red++;

            } else if (nums[i] == 2) {
                nums[i] = nums[blue];
                nums[blue] = 2;
                blue--;
                i--;
            }
        }
    }
};