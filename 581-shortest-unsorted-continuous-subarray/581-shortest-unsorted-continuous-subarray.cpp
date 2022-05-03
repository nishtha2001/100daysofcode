class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted = nums;  
        
        sort(sorted.begin(), sorted.end()); 
        
        int j = 0, k = 0; 
        
        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] != sorted[i]) { 
                j = i; 
                break;
            }
        } 
        for (int i = nums.size()-1; i >= 0; i--) { 
            if (nums[i] != sorted[i]) { 
                k = i; 
                break;
            }
        } 

        if (j == 0 and k == 0) { 
            return 0;
        } 
        
        return (k - j) + 1;
    }

};