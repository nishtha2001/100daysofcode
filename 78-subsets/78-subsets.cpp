class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(int idx, vector<int>&temp, vector<int>& arr){
        if(arr.size()==idx){
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[idx]);
        solve(idx+1, temp,arr);
        
        temp.pop_back();
        solve(idx+1, temp,arr);
        
    }
    
    vector<vector<int>> subsets(vector<int>& arr) {
        
        vector<int>temp;
        solve(0, temp, arr);
        return ans;
    }
};