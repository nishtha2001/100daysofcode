class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i = 0; i < n; i++) {
            int index=lower_bound(res.begin(), res.end(), nums[i])-res.begin();
            if(index==res.size()) {
                res.push_back(nums[i]);
            } 
            else {
                res[index]=nums[i];
            }
        }
        return res.size();
    }
};