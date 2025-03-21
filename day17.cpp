//dau 17 q1
class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            if (s.length() != t.length()) return false;
    
            unordered_map<char, char> mapping;
            unordered_set<char> mapped_values;
    
            for (int i = 0; i < s.length(); ++i) {
                char s_char = s[i];
                char t_char = t[i];
                if (mapping.find(s_char) != mapping.end()) {
                    if (mapping[s_char] != t_char) return false;
                } else {
                    if (mapped_values.find(t_char) != mapped_values.end()) return false;
                    mapping[s_char] = t_char;
                    mapped_values.insert(t_char);
                }
            }
    
            return true;
        }
    };
    //day17 q2

class Solution {
    public:
        string removeOuterParentheses(string s) {
            string result = ""; 
            int openCount = 0;  
    
            for (char c : s) {
                if (c == '(') {
                   
                    if (openCount > 0) {
                        result += c;
                    }
                    openCount++;
                } else if (c == ')') {
                    openCount--;
                    if (openCount > 0) {
                        result += c;
                    }
                }
            }
            return result;
        }
    };