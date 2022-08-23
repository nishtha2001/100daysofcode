class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> res;
        int i{}, j{}, maxVal = INT_MIN, n = nums.size();
        
        //edge case - if k > n, return maxOf(arr)
        if(k > n)
        {
            res.emplace_back(*max_element(nums.begin(), nums.end()));
            return res;
        }
        
        while(j < n)
        {
            //calculations
            while(!q.empty() && q.back() < nums.at(j))
                q.pop_back();
            
            q.push_back(nums.at(j));
            
            if(j - i + 1 < k)
                j++;
            
            else if(j - i + 1 == k)
            {
                maxVal = q.front();
                res.emplace_back(maxVal);
                
                if(maxVal == nums.at(i) && !q.empty())
                    q.pop_front();
                
                i++;
                j++;
            }
        }
        
        return res;
    }
    
};