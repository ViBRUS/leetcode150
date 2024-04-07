class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        if(sz == 1) {
            return nums[0];
        } else {
            sort(nums.begin(), nums.end());
            return nums[sz/2];
        }
    }
};