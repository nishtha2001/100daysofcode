class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map <string, unordered_map <string, double>> m;
        for(int i = 0; i<equations.size(); i++){
            double v = values[i];
            m[equations[i][0]][equations[i][1]] = v;
            m[equations[i][1]][equations[i][0]] = 1/v;
            m[equations[i][0]][equations[i][0]] = 1.0;
            m[equations[i][1]][equations[i][1]] = 1.0;
        }
        for(auto it: m){
            for(auto j : m[it.first]){
                for(auto k: m[it.first])
                    m[j.first][k.first] = m[j.first][it.first] * m[it.first][k.first];
            }
        }
        vector <double> v;
        for(auto it: queries){
            string from = it[0];
            string to = it[1];
            if((m.find(from)!=m.end()) && (m[from].find(to)!=m[from].end()))
                v.push_back(m[from][to]);
            else
                v.push_back(-1.0);
        }
        return v;
    }
};