class Solution {
public:
    int Max(int a, int b){
        return a > b ? a : b;
    }
    int longestPalindrome(string s) {
        int maxOdd = 0, even = 0;
        int a[256] = {0};
        
        for(int i = 0; i < s.size(); i++){
            a[int(s[i])]++;
        }
        
        for(int i = 0; i < 256; i++){
            if(a[i] % 2 == 0 && a[i] != 0) even+=a[i]; // chẵn khác 0
            else if ((a[i] % 2 == 0) maxOdd = Max(maxOdd, a[i]);
        }
                     
        return even + maxOdd;
    }
};
