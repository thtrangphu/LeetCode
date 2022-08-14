class Solution {
public:
    string longestCommonPrefix(vector<string>& ss) {
        sort(ss.begin(), ss.end());
        int n = ss.size();
        
        if(ss[0] == "" || n == 0) return "";
        
        string ans = "";
        string a = ss[0];
        string b = ss[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]) ans = ans + a[i];
            else break;
        }
        return ans;
    }
};

//https://leetcode.com/problems/longest-common-prefix/solution/
