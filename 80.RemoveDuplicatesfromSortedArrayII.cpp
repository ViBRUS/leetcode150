class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1, flag=1; 
        for(int j=1;j<nums.size();++j) {
            if(nums[j] != nums[j-1]) {
                nums[i] = nums[j];
                i++;
                flag = 1;
            } else if(flag == 1) {
                nums[i] = nums[j];
                i++;
                flag--;
            }
        }
        return i;
    }
};