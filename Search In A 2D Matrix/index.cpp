//Problem 73 

class Solution {
public:

    bool searchRow(vector<vector<int>>& mat, int row, int target) {
        int n = mat[0].size();
        int st = 0, end = n-1;
 
         while(st<=end) {          
         int mid = st + (end - st) /2;
         if(target == mat[row][mid]) {
            return true;
        } else if (target >= mat[row][mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
        }
       return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int st = 0, end = m-1;
        while(st<=end) {
            int mid = st + (end - st) /2;
            if(target >= mat[mid][0] && target <=  mat[mid][n-1]) {
               return searchRow(mat, mid, target);
            } else if (target >= mat[mid][n-1])  {
                st = mid + 1;
            } else {
               end = mid - 1;
            }
        }
      return false;
    }
};