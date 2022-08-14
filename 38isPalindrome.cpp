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
