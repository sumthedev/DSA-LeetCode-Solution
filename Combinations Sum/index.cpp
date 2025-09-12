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

//second sol with sets 

class Solution {
public:

 set<vector<int>> s;
  void helper (vector<int>& arr, int i, int tar,  vector<vector<int>>& ans, vector<int>& comb)  {
  
  int n = arr.size();
    if( i== n || tar < 0) {
    return;
  }

  if(tar == 0) {
    if(s.find(comb) == s.end()) {
       ans.push_back(comb);
       s.insert(comb);
    }
   
    return;
  }



  comb.push_back(arr[i]);
  helper(arr, i+1,  tar-arr[i], ans, comb);
  helper(arr, i, tar-arr[i], ans, comb);
  comb.pop_back();
  helper(arr, i+1, tar, ans, comb);

  }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
    vector<vector<int>> ans;
    vector<int> comb;
  

    helper(arr, 0, tar, ans, comb);
    return ans;
        
    }
};