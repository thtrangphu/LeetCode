class Solution {
public:
  
        int search(vector<int> a, int x){
            int l = 0;
            int r = a.size() - 1;

            for (;l <= r;){
                int m = (l + r)/2;
                if(a[m] == x) return m;
                else if (a[m] > x) r = m -1;
                else l = m + 1;		
            }
            return -1;
    }
  
};
