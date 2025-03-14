//sol1
class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            int n = image.size();
            for (int i = 0; i < n; ++i) {
                
                reverse(image[i].begin(), image[i].end());
               
                for (int j = 0; j < n; ++j) {
                    image[i][j] = 1 - image[i][j];
                }
            }
            return image;
        
        }
    };
    //sol 2