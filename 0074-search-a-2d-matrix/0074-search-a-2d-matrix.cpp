class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(size_t i = 0; i < matrix.size(); i++) {
            int l = 0, r = matrix[i].size() - 1; // Use matrix[i].size() - 1 for proper bounds
            while(l <= r) { // Proper condition for binary search
                int mid = l + (r - l) / 2; // Prevent overflow
                if(matrix[i][mid] == target) {
                    return true;
                } else if(matrix[i][mid] < target) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};
