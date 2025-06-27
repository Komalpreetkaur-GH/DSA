class Solution {
public:
    unordered_map<string, vector<pair<string, double>>> graph;

    bool dfs(string curr, string target, unordered_set<string>& visited, double& result, double temp) {
        if (curr == target) {
            result = temp;
            return true;
        }
        visited.insert(curr);

        for (auto& neighbor : graph[curr]) {
            string next = neighbor.first;
            double val = neighbor.second;
            if (!visited.count(next)) {
                if (dfs(next, target, visited, result, temp * val))
                    return true;
            }
        }
        return false;
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        // Build the graph
        for (int i = 0; i < equations.size(); ++i) {
            string a = equations[i][0];
            string b = equations[i][1];
            double val = values[i];
            graph[a].push_back({b, val});
            graph[b].push_back({a, 1.0 / val});
        }

        vector<double> answers;
        for (auto& q : queries) {
            string start = q[0];
            string end = q[1];
            if (graph.find(start) == graph.end() || graph.find(end) == graph.end()) {
                answers.push_back(-1.0);
            } else if (start == end) {
                answers.push_back(1.0);
            } else {
                unordered_set<string> visited;
                double result = -1.0;
                dfs(start, end, visited, result, 1.0);
                answers.push_back(result);
            }
        }

        return answers;
    }
};
