//day18 q1
class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) return false;
    
            unordered_map<char, int> charCount;
            for (char c : s) {
                count[c]++;
            }
            for (char c : t) {
                count[c]--;
                if (count[c] < 0) return false; 
            }
    
            return true;
        }
    };
//day 18 q2
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";  
            string prefix = strs[0]; 
    
            for (int i = 1; i < strs.size(); ++i) {
                while (strs[i].find(prefix) != 0) { 
                    prefix = prefix.substr(0, prefix.length() - 1); 
                    if (prefix.empty()) return "";
                }
            }
            return prefix; 
        }
    };

