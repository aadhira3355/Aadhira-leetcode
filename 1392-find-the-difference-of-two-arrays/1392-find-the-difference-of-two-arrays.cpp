class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1(nums1.begin(),nums1.end());
        set<int>st2(nums2.begin(),nums2.end());
        vector<vector<int>>result;
        vector<int>v1,v2;
        for(auto it1: st1){
            if(st2.find(it1) == st2.end())
                v1.push_back(it1);
        }
        for(auto it2: st2){
            if(st1.find(it2)== st1.end())
                v2.push_back(it2);
        }
        result={v1,v2};
        return result;
    }
};