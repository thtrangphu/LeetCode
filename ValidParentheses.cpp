class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
       
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') x.push(')');
            else if(s[i] == '[') x.push(']');
            else if(s[i] == '{') x.push('}');
            else 
            {
                if( x.empty() || (s[i] != x.top())) return false;
                else x.pop();
            }
        }
        if(x.empty())                                              
            return true;
        return false;
    }
};
