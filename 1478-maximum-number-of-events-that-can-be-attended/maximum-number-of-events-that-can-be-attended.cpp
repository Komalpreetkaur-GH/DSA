#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        // Sort events by start day
        sort(events.begin(), events.end());

        // Min-heap to store the end days of events
        priority_queue<int, vector<int>, greater<int>> minHeap;

        int i = 0, n = events.size();
        int day = 1, res = 0;

        // Find the last possible day
        int lastDay = 0;
        for (auto& e : events)
            lastDay = max(lastDay, e[1]);

        // Process each day
        for (day = 1; day <= lastDay; ++day) {
            // Add events that start today
            while (i < n && events[i][0] == day) {
                minHeap.push(events[i][1]);
                ++i;
            }

            // Remove events that already ended
            while (!minHeap.empty() && minHeap.top() < day) {
                minHeap.pop();
            }

            // Attend the event with the earliest end day
            if (!minHeap.empty()) {
                minHeap.pop();
                ++res;
            }
        }

        return res;
    }
};
