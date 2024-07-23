class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i: nums)
            map[i]++;
        vector<pair<int,int>>freq;
        for(auto& p : map){
            freq.push_back({p.second,p.first});
        }
        sort(freq.begin(),freq.end(),greater<pair<int,int>>());
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(freq[i].second);
        }
        return result;
    }
};