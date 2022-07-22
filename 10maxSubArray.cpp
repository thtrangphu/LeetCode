class Solution {
public:
    
int maxSubArray(vector<int>& a) {
    int max = a[0];
    int n = a.size();

    while (n > 0) {
       
        for (int i = 0; i < a.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < n + i && j < a.size(); j++) {
                // Tính tổng n phần tử bắt đầu từ vị trí j = i đến n + i
                cout << a[j] << ", ";
                sum += a[j];
            }
            if (sum > max) max = sum;
            
        }
           
        n--;
    }
    return max;

}
};
