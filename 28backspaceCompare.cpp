class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss = "", tt = "";
        
        for (int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z')
                ss += s[i];
            else if(ss.empty() == 0){
                // nếu ss có kí tự và s[i] = '#'
                ss.pop_back();                
            }
        }
        
        for(int i = 0; i < t.length(); i++){
            if(t[i] >= 'a' && t[i] <= 'z')
                tt += t[i];
            else if(tt.empty() == 0)
                tt.pop_back();
        }
        
        if(tt ==ss) return true;
        return false;
    }
};
