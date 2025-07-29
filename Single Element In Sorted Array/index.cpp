// Problem 540 Single Element IN Sorted Array

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size() -1;
        int st = 0;
        int end = n-1;

        if(n==1) return A[0];

        while(st <= end) {
            int mid = st + (end - st)/2;
            if(mid == 0 && A[0] != A[1]) return A[0];
            if(mid == n-1 && A[n-1] != A[n-2]) return A[n-1];
            if(A[mid-1] != A[mid] && A[mid] != A[mid+1]) {
                return A[mid];
            };

            if(mid%2 == 0){ 
                if(A[mid-1] == mid) {
                    end = mid - 1;
                } else {
                    st = mid+1;
                }

            } else {
                 if(A[mid-1] == mid) {
                      st = mid+1;
                } else {
                     end = mid - 1;
                }
            }
        }
         return -1;

    }
};