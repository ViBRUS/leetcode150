class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> op;
        int sz = nums.size();
        for(int i=0;i<sz;++i) {
            for(int j=i+1;j<sz+1/2;++j) {
                if(nums[i] + nums[j] == target) {
                    op.push_back(i);
                    op.push_back(j);
                    return op;
                } else if (nums[sz-1] + nums[j] == target) {
                    op.push_back(j);
                    op.push_back(sz-1);
                    return op;
                } else if (nums[i] + nums[sz-1] == target) {
                    op.push_back(i);
                    op.push_back(sz-1);
                    return op;
                }
            }
        }
        return op;
    }
};