//287 

// solved by using unorderd set TC  & SCwill be O(n) 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans;
        unordered_set<int> s;
        for(int i=0; i<n; i++) {
            if(s.find(nums[i]) != s.end()) {
                ans = nums[i];
            }
            s.insert(nums[i]);
        }

        return ans;
    }
};

// TC 0(n) but SC O(1)

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
      int slow = arr[0], fast = arr[0];
      do {
        slow = arr[slow];
        fast = arr[arr[fast]];
      } while(slow != fast);

      slow = arr[0];
      while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
      }

      return slow;
    }
};

