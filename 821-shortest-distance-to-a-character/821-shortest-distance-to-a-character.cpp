class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
         vector<int> idx;
        int N = s.length();
        for (int i = 0; i < N; i++) {
            if (s[i] == c)
                idx.push_back(i);
        }
        vector<int> res(N, 0);
        for (int i = 0; i < N; i++) {
            if (s[i] != c) {
                int dist = INT_MAX;
                for (int d: idx) {
                    dist = min(dist, abs(d - i));
                }
                res[i] = dist;
            }
        }
        return res;
    }
};