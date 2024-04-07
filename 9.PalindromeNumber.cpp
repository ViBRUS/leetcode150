class Solution {
public:
    bool isPalindrome(int x) {
        string no = to_string(x);
        int len = no.length();
        int cnt=0;
        for(int i=0;i<len/2;i++) {
            if (no[i] == no[len-1-i]) {
                cnt++;
            }
        }
        return cnt == len/2;
    }
};