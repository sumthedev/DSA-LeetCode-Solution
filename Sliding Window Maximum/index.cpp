class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;

        // analyze ist window

        for(int i=0; i<k; i++) {
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);
        }

        // swm for other windows

    for(int i = k; i<nums.size(); i++) {
       res.push_back(nums[dq.front()]);

       // remove not part of the window 
       while(dq.size() > 0 && dq.front() <= i-k) {
        dq.pop_front();
       }

       // remove smaller values
       while(dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);

    }

    res.push_back(nums[dq.front()]);
    return res;

        
    }
};