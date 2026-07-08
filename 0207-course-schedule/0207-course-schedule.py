class Solution:
    def dfs(self, node, adj, vis, pathvis):
        vis[node] = True
        pathvis[node] = True

        for adjnode in adj[node]:
            if not vis[adjnode]:
                if self.dfs(adjnode, adj, vis, pathvis):
                    return True
            elif pathvis[adjnode]:
                return True

        pathvis[node] = False
        return False

    def canFinish(self, numCourses, prerequisites):

        # Build adjacency list
        adj = [[] for _ in range(numCourses)]

        for a, b in prerequisites:
            adj[b].append(a)

        vis = [False] * numCourses
        pathvis = [False] * numCourses

        # Run DFS from every unvisited node
        for i in range(numCourses):
            if not vis[i]:
                if self.dfs(i, adj, vis, pathvis):
                    return False

        return True