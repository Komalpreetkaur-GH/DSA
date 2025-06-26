class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> adj(n);  // node, direction

        // direction: 1 means original (a → b), 0 means reversed (b ← a)
        for (auto& conn : connections) {
            int from = conn[0], to = conn[1];
            adj[from].push_back({to, 1});  // original direction
            adj[to].push_back({from, 0});  // reverse connection
        }

        vector<bool> visited(n, false);
        int count = 0;

        function<void(int)> dfs = [&](int node) {
            visited[node] = true;
            for (auto& [neigh, dir] : adj[node]) {
                if (!visited[neigh]) {
                    if (dir == 1) count++;  // needs to be reversed
                    dfs(neigh);
                }
            }
        };

        dfs(0);
        return count;
    }
};
