// 852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {

        int s = 1; 
        int e = A.size() - 2; 

        while(s <= e) {
            int mid = s + (e-s)/2;
            if(A[mid -1] < A[mid] && A[mid] > A[mid+1]) {
                return mid;
            } else if (A[mid-1] < A[mid]) {
               s = mid+1;
            } else {
             e = mid-1;
            }
          
        } 

        return -1;
    }
};