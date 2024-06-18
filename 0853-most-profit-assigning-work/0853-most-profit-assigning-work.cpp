class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();
        priority_queue<pair<int, int>> pq; // max-heap for jobs based on profit
        
        // Combine difficulty and profit into a vector of pairs
        for (int i = 0; i < n; i++) {
            pq.push({profit[i], difficulty[i]});
        }
        
        // Sort workers by their ability in descending order
        sort(worker.begin(), worker.end(), greater<int>());
        
        int total = 0;
        int i = 0;
        
        // Process each worker
        for (int j = 0; j < m; j++) {
            while (!pq.empty() && pq.top().second > worker[j]) {
                pq.pop();
            }
            if (!pq.empty()) {
                total += pq.top().first;
            }
        }
        
        return total;
    }
};