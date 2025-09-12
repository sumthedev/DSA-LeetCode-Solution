//Problem 39

class Solution {
public:

 void helper(vector<int>& arr, int idx, int tar, vector<vector<int>>& ans, vector<int>& comb) {
    if (tar == 0) {
        ans.push_back(comb);
        return;
    }
    
    if (idx >= arr.size() || tar < 0) {
        return;
    }

    comb.push_back(arr[idx]);
    helper(arr, idx, tar - arr[idx], ans, comb);
    comb.pop_back(); // Backtrack
    helper(arr, idx + 1, tar, ans, comb);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
    vector<vector<int>> ans;
    vector<int> comb;
  

    helper(arr, 0, tar, ans, comb);
    return ans;
        
    }
};