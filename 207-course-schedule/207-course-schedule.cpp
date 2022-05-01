class Solution {
    bool checkForCycle(vector<vector<int>>&graph, vector<int> &vis, int i){
       if (vis[i] == 1) return true;
        
        if (vis[i] == 0) {
            vis[i] = 1;
            for (auto it : graph[i]) {
                if (checkForCycle(graph, vis, it)) return true;
            }
        }
        
        vis[i] = 2;
        return false;
    }
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>vis(numCourses,0);
        vector<vector<int>> graph(numCourses);
        
         for (auto pre : prerequisites) {
            graph[pre[1]].push_back(pre[0]);
        }
       
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(checkForCycle(graph,vis,i)) return false;
            }
        }
        return true;
    }
};