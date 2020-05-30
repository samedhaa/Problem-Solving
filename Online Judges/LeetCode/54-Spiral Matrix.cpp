class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(matrix.size() == 0) {
            return ans;
        }
        int n = matrix.size();
        int m = matrix[0].size();

        int bottom = n-1, top = 0;
        int right = m-1, left = 0;

        while(bottom >= top && right >= left) {

            for(int i=left;i<=right;i++) {
                ans.push_back(matrix[top][i]);
            }
            top = top + 1;

            for(int i=top;i<=bottom;i++) {
                ans.push_back(matrix[i][right]);
            }
            right = right - 1;

            if(bottom >= top) {
                for(int i = right;i>=left;i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom = bottom - 1;
            }

            if(left <= right) {
                for(int i=bottom;i>=top;i--) {
                    ans.push_back(matrix[i][left]);
                }
                left = left + 1;
            }
        }
        return ans;
    }
};
