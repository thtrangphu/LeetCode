class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
       
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') 
                x.push(s[i]);
            else {             
                if( x.empty() || (s[i] == ')' && x.top() != '(') || (s[i] == ']' && x.top() != '[') || (s[i] == '}' && x.top() != '{') ) return false;
                else x.pop();
            }
        }
        if(x.empty())                                              
            return true;
        return false;
    }
};
