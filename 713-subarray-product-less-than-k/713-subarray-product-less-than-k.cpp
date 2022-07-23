class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
      int p=1, res=0, left=0;
        for(int end=0;end<nums.size();end++){
            p*=nums[end];
            while(p>=k){
                p/=nums[left];
                left++;
            }
            res+=1+end-left;
        }
     return res;
    }
};