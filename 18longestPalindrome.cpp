class Solution {
public:
    int Max(int a, int b){
        return a > b ? a : b;
    }
    int longestPalindrome(string s) {
        int sum = 0;
        bool check = false;
        int a[58] = {0};
        
        for(int i = 0; i < s.size(); i++){
            a[int(s[i]) - 65]++;
        }
        
         for (int i= 0; i < 58; i++){
            sum += a[i] / 2;
            if(a[i] % 2 == 1)
                check = true;
        }
        
        return check == true ? 1 + 2 * sum : 2 * sum;
    }
};
