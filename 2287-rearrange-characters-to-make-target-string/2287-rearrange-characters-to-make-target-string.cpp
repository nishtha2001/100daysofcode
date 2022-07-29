class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        const int a = 26;
        int ans = INT_MAX;
        vector<int> mp(a), mpp(a);
        for(char i : s){
            mp[i - 'a']++;
        }
        for(char j : target){
            mpp[j - 'a']++;
        }
        for(int i = 0; i < a; i++){
            if(mpp[i] == 0) continue;
            ans = min(ans, mp[i]/mpp[i]);
        }
        return ans;
        
    }
};