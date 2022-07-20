class Solution {
public:
    
int maxProfit(vector<int>& prices) {
	int ans = 0;
	int tmp = 0;
	int min = INT_MAX;

	for (int i = 0; i < prices.size(); i++) {
		if (prices[i] < min) min = prices[i];
		tmp = prices[i] - min;
		if (tmp > ans) ans = tmp;
	}
	return ans;
}
};
