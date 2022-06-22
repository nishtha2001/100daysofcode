class Solution {
public:
    int thirdMax(vector<int>& nums) {
	set<int> st(nums.begin(),nums.end());
	return st.size()<3? *prev(st.end()):*prev(st.end(),3);
}
};