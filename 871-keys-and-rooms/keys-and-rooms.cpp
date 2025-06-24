class Solution {
public:
    void dfs(int room,vector<vector<int>>&rooms,vector<bool>&visited){
        visited[room]=true;
        for(int neighbours:rooms[room]){
            if(!visited[neighbours]){
                dfs(neighbours,rooms,visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
        dfs(0,rooms,visited);

        for(bool x: visited){
            if(!x){
                return false;
            }

        }
        return true;
        
    }
};