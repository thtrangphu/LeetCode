#include<algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v(3, INT_MIN);
        sort(nums.begin(), nums.end());
   
        for(int i = 0; i< nums.size() - 2; i++)
        {
            int l = i + 1; 
            int r = nums.size() - 1;
            while(l < r){
                int x = nums[i] + nums[l] + nums[r];
                if(x == 0) {
                    v[0] = nums[i];
                    v[1] = nums[l];
                    v[2] = nums[r];
                    ans.push_back(v);
                    l++;r--;
                    
                }
                else if(x > 0){
                    r--;
                }
                else if(x < 0){
                    l++;
                }
            }
      
        }
        return ans;
    }
    
};
