class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0 , r = matrix.size()*matrix[0].size()-1;
         int c = matrix[0].size();
        while(l<=r)
        {
            int mid = (l+r)/2;

            if(matrix[mid/c][mid%c]==target) return true;
            else if(matrix[mid/c][mid%c]>target) r = mid - 1;
            else l = mid + 1;
        }

        return false;
    }
};