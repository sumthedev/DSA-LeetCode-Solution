//LeetCode Problem Reverse String 344

class Solution {
public:
    void reverseString(vector<char>& s) {           
      int start = 0;
      int end = s.size() - 1;
      int temp;
     while(start < end) {
      temp = s[start];
      s[start] = s[end];
      s[end] = temp;
      start++;
      end--;
  };

  }
};
