class Solution {
    private:
     void solve(vector<vector<int>> &ans, vector<int> &temp, int n, int k, int index ){
         if(n==0 && k==0){ 
          ans.push_back(temp); 
           return; 
       }
          if(n==0){ 
            return; 
        }
          for(int i = index; i<=9; i++){ 
            temp.push_back(i);
            solve(ans, temp, n-i, k-1, i+1); 
            temp.pop_back(); 
        }
     }
         
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;  
            vector<int> temp; 
            solve(ans, temp, n, k, 1); 
            return ans; 
    }
};