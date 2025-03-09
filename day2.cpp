//day2 solution 1

class Solution {
    public:
      int isGoodorBad(string s) {
          int vowel=0;
          int consonent=0;
          int len=s.length();
          for(int i=0;i<len;i++)
          {
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
              {
                  vowel++;
                  consonent=0;
              }
              else
              {
                  consonent++;
                  vowel=0;
              }
              if(vowel==5||consonent==3)
              {
                  return 0;
              }
              else{
                  return 1;
              }
          }
      }
  };
  //tc=O(|s|) sc=O(1)
 
  //day2 solution 2
  class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
         map<int, int> merged;
        
        
        for (const auto& p : nums1) {
            merged[p[0]] += p[1];
        }
    
        
        for (const auto& p : nums2) {
            merged[p[0]] += p[1];
        }
    
        
        vector<vector<int>> result;
        for (const auto& p : merged) {
            result.push_back({p.first, p.second});
        }
    
        return result;
        }
    };
    //tc=O((n1+n2)log(n1+n2)) and sc=O(n1+n2)
  