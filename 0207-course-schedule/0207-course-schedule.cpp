class Solution {
public:
bool iscycledfs(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited,vector<bool>&inrecursion){
    visited[u]=true;
    inrecursion[u]=true;
    for(int &v : adj[u]){
        if(!visited[v] && iscycledfs(adj,v,visited,inrecursion))
            return true;
        else if(inrecursion[v]==true)
            return true;
    }
    inrecursion[u]=false;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        vector<bool>visited(numCourses,false);
        vector<bool>inrecursion(numCourses,false);
        for(auto &vec : prerequisites){
            int a = vec[0];
            int b = vec[1];
            //b-->a
            adj[b].push_back(a);
        }
        for(int i=0;i<numCourses;i++){
            if(!visited[i] && iscycledfs(adj,i,visited,inrecursion))
                return false;
        }
        return true;
    }
};