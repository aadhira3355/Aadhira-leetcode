class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }

    // Step 2: Convert the map to a vector of pairs (frequency, element)
    vector<pair<int, int>> freqVec;
    for (const auto& pair : frequencyMap) {
        freqVec.push_back({pair.second, pair.first});
    }

    // Step 3: Sort the vector by frequency in descending order
    sort(freqVec.begin(), freqVec.end(), greater<pair<int, int>>());

    // Step 4: Collect the top K elements
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(freqVec[i].second);
    }

    return result;

    }
};