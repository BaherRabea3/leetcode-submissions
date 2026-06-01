class Solution {
public:
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, h = m - 1;
        int mid = 0;
        while(l <= h){
             mid = (l + h) / 2;
             if(matrix[mid][0] == target || matrix[mid][n - 1] == target)
                return true;
            if(matrix[mid][0] < target ){
                if(matrix[mid][n - 1] > target)
                    break;
                l = mid + 1;
            }
            else if(matrix[mid][0] > target){
                if(matrix[mid][n - 1] < target)
                    break;
                h = mid - 1;
            }
                
        }
        l = 0,h = n - 1;
        int row = mid;
        while(l <= h){
           mid = (l + h) / 2;
           if(matrix[row][mid] == target)
                return true;
            if(matrix[row][mid] < target)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return false;
    }
};