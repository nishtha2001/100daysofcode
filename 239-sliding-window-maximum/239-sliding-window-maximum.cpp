class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>d;
        int i=0, j=0;
        int n=nums.size();
        
        
        while(j<n){
            while(!d.empty() && d.back() < nums[j])
                d.pop_back();
            d.push_back(nums[j]);
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                ans.push_back(d.front());
                
                if(d.front()==nums[i] && !d.empty())
                    d.pop_front();
                
                i++;
                j++;
            }
        }
        return ans;
    }
};