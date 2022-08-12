class Solution {
    public:
    int singleNumber(vector<int>& a) {
        sort(a.begin(), a.end());
        
        int i = 0;
        
        int n = a.size();
        while(i < n - 1){
            if(a[i] == a[i + 1]) 
                i+=2;
            else
                break;
        }
        
        
        return a[i];
    }
};
