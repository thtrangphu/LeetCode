// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0) return false;
        
//         int n = log(x) - 1;
        
//         int y = 0, tmp = x;
//         for(int i = 0; i < n; i++){
//             y += (x % 10) * int(pow(10, n - i - 1));
//             x /= 10;
//         }
//         return (tmp == y);
//     }
// };
#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
   
        stringstream ss;
        ss << x;
        string s = ss.str();
        int n = s.size();
        
        for(int i = 0; i < n; i++){
            if(s[i] != s[n - i - 1]) return false;
        }
        return true;
    }
};
// class Solution {
//     public:
//     bool isPalindrome(int x) {
//         if (x < 0)
//             return false;
//         int y = 0, z = x; 
//         while (z) {
//             y *= 10;
//             y += z % 10;
//             z /= 10;
//         }
//         return x == y;
//     }
// };
