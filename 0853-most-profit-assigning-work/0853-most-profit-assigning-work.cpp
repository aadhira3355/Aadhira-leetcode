class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();
        
        vector<pair<int, int>> jobs;
        for (int i = 0; i < n; i++) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        
        // Sort jobs by difficulty (ascending) and profit (descending)
        sort(jobs.begin(), jobs.end());
        
        // Sort workers by their ability
        sort(worker.begin(), worker.end());
        
        int total = 0;
        int best = 0;
        int i = 0;
        
        for (int j = 0; j < m; j++) {
            while (i < n && jobs[i].first <= worker[j]) {
                best = max(best, jobs[i].second);
                i++;
            }
            total += best;
        }
        
        return total;
    }
};