class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.length() - 1; i >= 0; i--) {
        if (num[i] % 2 != 0) {
 
            string s1 = num.substr(0, i + 1);
            return s1;
        }
        }
      return "";  
    }
};