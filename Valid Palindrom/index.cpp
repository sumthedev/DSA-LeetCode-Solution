// Problem 125 


class Solution {
public:
   
   bool isAplhaNumeric(char ch) {
    if((ch >= '0' && ch <= '9') || 
     (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }
    return false;
   }

    bool isPalindrome(string s) {
    int st = 0, end = s.length()-1;

    while(st<=end) {
      if(!isAplhaNumeric(s[st])) {
        st++;
        continue;
      }

       if(!isAplhaNumeric(s[end])) {
        end--;
        continue;
      }

      if(tolower(s[st]) != tolower(s[end])) {
        return false;
      }

       st++;
       end--;
    }

      return true; 

    }
};


// again solved 

class Solution {
public:
   
    bool isPalindrome(string s) {
    int st = 0, end = s.length()-1;

    while(st<=end) {
      if(!isalnum(s[st])) {
        st++;
        continue;
      }

       if(!isalnum(s[end])) {
        end--;
        continue;
      }

      if(tolower(s[st]) != tolower(s[end])) {
        return false;
      }

       st++;  end--;
    }

      return true; 

    }
};