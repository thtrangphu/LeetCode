
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        
        for (int i = 0; i < 32; i++) {
            res <<= 1; // dịch trái
            res += n % 2; 
            n >>= 1; // dịch phải
        }
        
        return res;
    }
};

// class Solution {
// public:
//     uint32_t reverseBits(uint32_t n) {
//         uint32_t m = 0;
//         for (int i = 0; i < 32; i++, n >>= 1) {
//             m <<= 1;
//             m |= n & 1;
//         }
//         return m;
//     }
// };

