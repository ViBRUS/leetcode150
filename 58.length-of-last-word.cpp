class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0, flag=0;
        for(int i=s.length()-1; i>=0; i--) {
            if(s[i] != ' ') {
                if (flag == 0) flag = 1;
                cnt++;
            } else if (flag != 0) {
                break;
            } else {
                continue;
            }
        }
        return cnt;
    }
};