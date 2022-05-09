class Solution {
public:
vector<string> letterCombinations(string digits) {
    vector<string> ans;        
    string curr;                
    if(digits.length() == 0) return ans;    
    
    backtrack(digits, 0, curr, ans);
    return ans;
    
}

void backtrack(string digits, int i, string curr, vector<string> &ans) {   
    unordered_map<char, string> mp = {          
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };
    if(i == digits.length()) {          
        ans.push_back(curr);            
        return;               
    }
    
    for(auto c : mp[digits[i]]){           
        curr.push_back(c);
        backtrack(digits, i+1, curr, ans);
        curr.pop_back();         
    }
   
}

};