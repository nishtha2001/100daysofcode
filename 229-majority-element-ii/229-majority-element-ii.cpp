class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int number1=-1;
        int number2=-1;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==number1) cnt1++;
            else if(nums[i]==number2) cnt2++;
            else if(cnt1==0) {
                number1=nums[i];
                cnt1=1;
            }
             else if(cnt2==0) {
                number2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0, cnt2=0;
         for(int i=0;i<nums.size();i++)
         {
            if(nums[i]==number1) cnt1++;
            else if(nums[i]==number2) cnt2++;
         }
        if(cnt1>nums.size()/3) ans.push_back(number1);
        if(cnt2>nums.size()/3) ans.push_back(number2);
        return ans;
    }
};