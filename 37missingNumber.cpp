class Solution {
public:
    
    int missingNumber(vector<int>& a) {
        int n = a.size();
        
        long sum = (n * (n + 1)) / 2;
        
        for(int i = 0; i < n; i++){         
            sum -= a[i];
        }
        
        return sum;
    }
};
/*
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if(n==0) return 0;        
    int l=0, r=n;
    while(l<=r){
        int m =(l+r)/2;
        if(m<n && nums[m]==m){
            l=m+1;
        }
        else if(m<n){
            r=m-1;
        }else{
            return n;
        }
    }
    return l;     
}

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if(n==0) return 0;        
    int l=0, r=n;
    while(l<=r){
        int m =(l+r)/2;
        if(m<n && nums[m]==m){
            l=m+1;
        }
        else if(m<n){
            r=m-1;
        }else{
            return n;
        }
    }
    return l;     
}

*/
