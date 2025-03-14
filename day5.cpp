//sol1
class Solution {
    public:
        int distMoney(int money, int children) {
           
            int remm = money - children;
            if (remm < 0) {
                return -1;
            }
        
            int maxx =min(remm / 7, children);
            remm -= 7 * maxx;
            int remc= children - maxx;
        
            if (remm >= remc && remm <= remc* 6) {
                return maxx;
            }
            return -1;
        }
    };
    //sol2
    class Solution {
        public:
            int longestPalindrome(string s) {
                unordered_map<char, int> count;
                for (char c : s) {
                    count[c]++;
                }
                
                int l = 0;
                bool odd_found = false;
                for (auto& pair : count) {
                    if (pair.second % 2 == 0) {
                        l+= pair.second;
                    } else {
                        l += pair.second - 1;
                        odd_found = true;
                    }
                }
                
                if (odd_found) {
                    l++;
                }
                
                return l;
            }
        };