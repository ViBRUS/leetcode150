class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int> cNums = nums;
        int sz = nums.size();
        k=k%sz;
        int idx = sz - k;
        for(int i=0;i<sz;i++) {
            nums[i]=cNums[idx % sz];
            idx++;
        }
    }
};