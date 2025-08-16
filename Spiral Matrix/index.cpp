//Problem 54 Spiral Matrix 

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int stRow = 0, endRow = m-1;
        int stCol = 0, endCol = n-1;
        vector<int> ans;

        while(stRow <= endRow && stCol <= endCol) {

            for(int j = stCol; j <= endCol; j++) {
                ans.push_back(matrix[stRow][j]);
            }

            for(int i = stRow+1; i <= endRow; i++) {
                ans.push_back(matrix[i][endCol]);
            }

            for(int j = endCol-1; j >= stCol; j--) {
                if(stRow == endRow) break;
                ans.push_back(matrix[endRow][j]);
            }

            for(int i = endRow-1; i > stRow; i--) {  
                if(stCol == endCol) break;
                ans.push_back(matrix[i][stCol]);
            }

            stRow++;
            endRow--;
            stCol++;
            endCol--;
        }

           return ans;
    }
};