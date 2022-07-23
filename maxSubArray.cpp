class Solution {
public:
    int Max(int a, int b) {
     return a > b ? a : b;
    }
int maxSubArray(vector<int>& a) {
    int max = a[0];
    int n = a.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum = sum + a[j]; // tại mỗi vị trí đều xét 1 -> n - 1 phần tử để tìm max của all
            max = Max(max, sum);//
            cout << "Sum = " << sum << " - Max = " << max << endl;
            
        }
       cout << "--------------" << endl;
    }

    return max;
}
};
