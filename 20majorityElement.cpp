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
    int j = 0;
    for (int count = 1, i = 1; i < num.size(); i++) {
        num[j] == num[i] ? count++ : count--;
        cout << "num[j] = " << num[j] <<" - num[i] = " << num[i] << " cnt = " << count<< endl;
        if (count == 0) {
            j = i;
            count = 1;
            cout << j << endl;
        }
    }
        
    return num[j];
}
};

/*
class Solution {
public:
    int majorityElement(vector<int> &a) {
        int n = a.size();
        int cnt = n/2;
        int j = 0;
        
        while(1){
            int c = 1;
            for(int i = 1; i < n; i++){
                if(a[j] == a[i]) c++;
            }
            if(c > cnt) return a[j];
            j++;
        }
        
    }
};
*/

