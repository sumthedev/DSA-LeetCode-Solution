//Problem 11 Container with Most Water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int i = 0;
        int j = height.size() - 1;

        while(i < j) {
            int w = j - i;
            int h = min(height[i], height[j]);
            int area = w * h;
            maxWater = max(maxWater, area);
            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
       
      return maxWater;

    }
};