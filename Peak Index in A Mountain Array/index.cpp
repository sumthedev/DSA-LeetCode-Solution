// 852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n = A.size();
        int s = 1;
        int e = n-2;

        while(s <= e) {
            int mid = s + (e-s)/2;
            if(A[mid] > A[mid-1] && A[mid] > A[mid+1]) {
                return mid;
            } 
            if(A[mid] < A[mid-1]) {
                e = mid-1;
            } else {
                s = mid-1;
            }
        } 

        return -1;
    }
};