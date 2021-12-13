class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	
        vector<vector<int>> ans;
		
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n-2; i++){            
            
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                int low = i+1;
                int high = n-1;
                int sum = 0-nums[i];
            
                while(low < high){
				
                    if(nums[low] + nums[high] == sum){
					
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[low]);
                        v.push_back(nums[high]);
                    
                        ans.push_back(v);
                    
                        while(low < high && nums[low] == nums[low+1]) low++;
                        while(low < high && nums[high] == nums[high-1]) high--;
                    
                        low++; high--;
                    }
                    else if(nums[low] + nums[high] > sum) {
                        high--;
					}
                    else{ 
                        low++;
					}
                }
            }
        }
        return ans;
    }
};
