// 169. Majority Element

// first solved by Brute Force 
// Brute force is not optimized approch becz its 0(n^2)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int f = 0;
       int mj = 0;
       int n = nums.size();

       for(int val : nums) {
        for(int el : nums) {
            if(el == val) {
                f++;
            }
        }

        if(f > n/2) {
         mj = val;
        }
       }

    return mj;

    }
};


// we can also do with sorting its a optimized approch rather then Brute Force TC will b O (nlogn)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int f = 0;
       int ans = 0;

       for(int i = 0; i<n; i++) {
        if(f == 0) {
            ans = nums[i];
        } 
        
         if (ans == nums[i]) {
            f++;
        } else {
            f--;
         }
       }
       
       return ans;
    }
};