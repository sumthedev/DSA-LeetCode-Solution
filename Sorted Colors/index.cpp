// Sort Colorz problem 75

//Ist Brute force 
sort(nums.begin(), nums.end()); // O(logn)

//Optimized approcah but with two pass 
// TC will be O(n)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zeros = 0;
        int ones= 0;
        int twos = 0;
        for(int i = 0; i<n; i++) {
            if(nums[i] == 0) {
                zeros++;
            } else if  (nums[i] == 1) {
                ones++;
            } else {
                twos++;
            }
        }


        int idx = 0;
        for(int i =0; i<zeros; i++) {
            nums[idx++] = 0;
        }

         for(int i =0; i<ones; i++) {
            nums[idx++] = 1;
        }

          for(int i =0; i<twos; i++) {
            nums[idx++] = 2;
        }
    }
};


//Optimal Approch 
//Dutch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};
