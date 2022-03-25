class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> result;
        int minCost = 0;
         
        for(int i=0;i<costs.size();i++){
            minCost+=costs[i][0];
            result.push_back(costs[i][1]-costs[i][0]);
                
        }
        sort(result.begin(),result.end());
        
        for(int i=0;i<costs.size()/2;i++){
            minCost+=result[i];
        }
        return minCost;
    }
};