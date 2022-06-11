class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
         int sum=0, n=nums.size();
        for(auto i:nums) 
            sum+=i;
        if(x>sum)
            return -1;
        int left=0,right=0, curr=0, ans=-1;
        for(; right<n;right++){
            curr+=nums[right];
            while(curr>sum-x&&left<=right){
                curr-=nums[left];
                left++;
            }
            if(curr==sum-x) ans=max(ans, right-left+1);
        }
        if(ans==-1) return ans;
        return n-ans;
                
    }
};