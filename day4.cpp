//sol 1
class Solution {
    public:
        int distinctIntegers(int n) {
         unordered_set<int> board;
        board.insert(n);
            for (int i = 1; i < n; ++i) {
             board.insert(i);
            }
            return board.size();
        }
    };

    //sol2
    lution {
        public:
          int findMinDiff(vector<int>& arr, int m) {
              sort(arr.begin(), arr.end());
              int minn = INT_MAX;
              for (int i = 0; i <= arr.size() - m; ++i) {
                  int d = arr[i + m - 1] - arr[i];
                  minn = min(minn, d);
              }
      
              return minn;
          }
      };
      