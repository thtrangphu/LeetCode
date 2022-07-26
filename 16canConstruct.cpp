class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int s[256] = {0};
        
        for(int i = 0; i < ransomNote.size(); i++){            
            s[int(ransomNote[i])]--;
        }
        
        for(int i = 0; i < magazine.size(); i++){            
            s[int(magazine[i])]++;
        }
        
        for(int i = 0; i < 256; i++){
            if(s[i] < 0) return 0;
        }
        
        return 1;
    }
};
