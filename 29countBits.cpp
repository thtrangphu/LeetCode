class Solution {
public:
    int count(int x){
        int ans = 0;
        
        while(x > 0){
            ans += x % 2;
            x /= 2;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector <int> a;
        
        for(int i = 0; i <= n; i++){
            a.push_back(count(i));
        }
        
        return a;
    }
};
