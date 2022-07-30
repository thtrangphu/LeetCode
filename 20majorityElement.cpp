/*
class Solution {
public:
    int majorityElement(vector<int>& a) {       
        int n = a.size();        
        
        for(int i = 0; i < n - 1; i++){
            int cnt = 0;
            for(int j  = i; j < n; j++){
                if(a[i] == a[j]) cnt++;
            }
            if(cnt > (n / 2)) return a[i];
        }
        return a[0];
    }
};
*/

class Solution {
public:
    int majorityElement(vector<int> &num) {
    int majorityIndex = 0;
    for (int count = 1, i = 1; i < num.size(); i++) {
        num[majorityIndex] == num[i] ? count++ : count--;
        cout << "num[majorityIndex] = " << num[majorityIndex] <<" - num[i] = " << num[i] << " cnt = " << count<< endl;
        if (count == 0) {
            majorityIndex = i;
            count = 1;
            cout << majorityIndex << endl;
        }
    }
        
    return num[majorityIndex];
}

};
