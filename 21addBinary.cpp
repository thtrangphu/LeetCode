class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        
        int na = a.size();
        int nb = b.size();
        int carry = 0;
        
        while(na > 0 || nb > 0 || carry){
            
            if(na > 0){
                na--;
                carry += a[na] - '0';
            }
            
            if(nb > 0){
                nb--;
                carry += b[nb] - '0';
            }
            
            ans = char((carry % 2) + '0') + ans;
            carry /= 2;
        }
        
        
        return ans;
    }
};
