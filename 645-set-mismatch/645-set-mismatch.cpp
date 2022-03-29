class Solution {
public:
   vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vect(nums.size() + 1);
        vector<int> res(2);
        
        for(int i = 0; i < nums.size(); i++) vect[nums[i]]++;
        
        for(int i = 1; i <= nums.size(); i++){
            if(vect[i] == 2) res[0] = i;
            if(vect[i] == 0) res[1] = i;
        }
        return res;
    }
};