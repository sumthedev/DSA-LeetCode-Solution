// Problem 9
class Solution {
public:
    int reverse(int x) {
        int reverseNo = 0;
        while(x != 0) {
            int digit = x % 10;
            if( reverseNo > INT_MAX/10 ||  reverseNo < INT_MIN / 10) {
                return 0;
            }

            reverseNo = reverseNo * 10 + digit;
            x = x/10;
        }
      return  reverseNo;      
    }

    bool isPalindrome(int n) { 
        if(n<0) return false; 
        int revNum = reverse(n);
        return revNum == n;
       
    }
};