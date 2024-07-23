class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
          unordered_map<int, int> frequency;
        for (int num : nums) {
            frequency[num]++;
        }

        // Step 2: Define the custom comparator for sorting
        auto compare = [&frequency](int a, int b) {
            // If frequencies are different, sort by frequency
            if (frequency[a] != frequency[b]) {
                return frequency[a] < frequency[b];
            }
            // If frequencies are the same, sort by value in decreasing order
            return a > b;
        };

        // Step 3: Sort the array with the custom comparator
        sort(nums.begin(), nums.end(), compare);

        return nums;
    }
};