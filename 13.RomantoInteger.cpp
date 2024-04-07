class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int no=0;
        for(int i=len-1;i>=0;i--) {
            switch(s[i]) {
                case 'I': 
                    no=no+1;
                    break;
                case 'V':
                    if (i-1 > -1 && s[i-1] == 'I') {
                        no=no-1;
                        i--;
                    }
                    no=no+5;
                    break;
                case 'X':
                    if (i-1 > -1 && s[i-1] == 'I') {
                        no=no-1;
                        i--;
                    }
                    no=no+10;
                    break;
                case 'L':
                    if (i-1 > -1 && s[i-1] == 'X') {
                        no=no-10;
                        i--;
                    }
                    no=no+50;
                    break;
                case 'C':
                    if (i-1 > -1 && s[i-1] == 'X') {
                        no=no-10;
                        i--;
                    }
                    no=no+100;
                    break;
                case 'D':
                    if (i-1 > -1 && s[i-1] == 'C') {
                        no=no-100;
                        i--;
                    }
                    no=no+500;
                    break;
                case 'M':
                    if (i-1 > -1 && s[i-1] == 'C') {
                        no=no-100;
                        i--;
                    }
                    no=no+1000;
                    break;
            }
        }
        return no;
    }
};