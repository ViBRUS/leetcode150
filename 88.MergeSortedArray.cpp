class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pl=m-1;
        int pr=n-1;
        int p=m+n-1;

        while(pl>=0 && pr>=0) {
            if(nums1[pl] > nums2[pr]) {
                nums1[p--] = nums1[pl--];
            } else {
                nums1[p--] = nums2[pr--];
            }
        }
        while(pr>=0) {
            nums1[p--] = nums2[pr--];
        }
    }
};