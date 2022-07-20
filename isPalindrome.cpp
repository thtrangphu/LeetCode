class Solution {
public:
    bool isPalindrome(string s) {
        string tmp = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                tmp += s[i] + 32;
            }
            else if (s[i] >= 97 && s[i] <= 122) {
                tmp += s[i];
            }
            else  if(s[i]>='0' && s[i]<='9'){
                tmp += s[i];
            }
        }

        int j = tmp.length();
        for (int i = 0; i < j / 2; i++) {
            if (tmp[i] != tmp[j - i - 1]) return false;
        }

        return true;
    }
};
