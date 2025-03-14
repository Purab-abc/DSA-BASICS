//sol1
class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flower, int n) {
         int c = 0;
        int i = 0;
        while (i < flower.size()) {
            if (flower[i] == 0) {
                bool l = (i == 0) || (flower[i - 1] == 0);
                bool r = (i == flower.size() - 1) || (flower[i + 1] == 0);
                if (l&& r) {
                    flower[i] = 1;
                    c++;
                    if (c>= n) {
                        return true;
                    }
                }
            }
            i++;
        }
        return c >= n;  
        }
        
    };
    //sol 2
    class Solution {
        public:
            int minimumSumSubarray(vector<int>& num, int l, int r) {
                   int n = num.size();
            int minn = INT_MAX;
            for (int len = l; len <= r; ++len) {
                int c = 0;
                for (int i = 0; i < len; ++i) {
                    c += num[i];
                }
                
                if (c > 0) {
                    minn = min(minn, c);
                }
                
                for (int i = len; i < n; ++i) {
                    c += num[i] - num[i - len];
                    if (c > 0) {
                        minn = min(minn, c);
                    }
                }
            }
        
            return minn == INT_MAX ? -1 :minn;
            }
            
        };