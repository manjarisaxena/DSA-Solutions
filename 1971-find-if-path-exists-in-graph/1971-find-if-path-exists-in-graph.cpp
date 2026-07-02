class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
        vis[node] = 1;

        for (int nei : adj[node]) {
            if (!vis[nei])
                dfs(nei, adj, vis);
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<vector<int>> adj(n);

        // Adjacency List
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n, 0);
        dfs(source, adj, vis);

        return vis[destination];
    }
};