class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        vector<int>freq1(26,INT_MAX);
        for(auto word: words){
            vector<int>freq2(26,0);
            for(auto i: word) freq2[i-'a']++;
            for(int i =0;i<26; i++)
                freq1[i]=min(freq1[i], freq2[i]);
        }
        for(int i=0;i<26;i++)
            if(freq1[i])
                while(freq1[i]--) ans.push_back(string(1,i+'a'));
        return ans;
    }
};