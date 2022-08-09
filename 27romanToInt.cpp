class Solution {
public:
    int value(char c){
        if(c == 'I')
                return 1;
        else if(c == 'V')
            return 5;
        else if(c == 'X')
            return 10;
        else if(c == 'L')
            return 50;
        else if(c == 'C')
            return 100;
        else if(c == 'D')
            return 500;
        else if(c == 'M')
            return 1000;
        else return 0;
    }
    int romanToInt(string s) {
        int n = s.length();
        int ans = value(s[n-1]);
        for(int i  = 0; i < n - 1; i++){
            int v = value(s[i]);
            if(v >= value(s[i + 1])) ans += v;
            else ans -= v;
            cout << v << endl;
        } 
        return ans;
        
    }
};
