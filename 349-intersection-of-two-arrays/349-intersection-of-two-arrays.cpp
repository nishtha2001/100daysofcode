class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        vector<int> res;
        for(int x:nums1)
            s.insert(x);
        for(int x:nums2){
            if(s.count(x)){
                res.push_back(x);
                s.erase(x);
            }
        }
        return res;
    }
};