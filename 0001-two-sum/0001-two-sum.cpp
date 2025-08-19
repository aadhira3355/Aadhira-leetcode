class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>numsmap;

        int n=size(nums);

        for(int i=0;i<n;i++){
            int diff = target-nums[i];

            if(numsmap.count(diff)){
                return {numsmap[diff],i};
            }
            numsmap[nums[i]]=i;
        }
        return {};
    }
};