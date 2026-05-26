class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = 0;
        int r = matrix.size() - 1;

        while (l < r) {
            for (int i = 0; i < r - l; i++) {
                int top = l;
                int bottom = r;

                // save topleft 
                int topLeft = matrix[top][l+i];

                // bottom left to top left
                matrix[top][l+i] = matrix[bottom-i][l];

                // bottom right into bottom left
                matrix[bottom-i][l] = matrix[bottom][r-i];

                // top right into bottom right
                matrix[bottom][r-i] = matrix[top + i][r];

                // top left into top right
                matrix[top + i][r] = topLeft;
            }
            r--;
            l++;
        }
        
    }
};
