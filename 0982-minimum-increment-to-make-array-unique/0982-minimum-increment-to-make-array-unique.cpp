class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n= nums.size();
        int moves=0;
        sort(begin(nums),end(nums));
        for(int i=1; i<n;i++){
        if(nums[i]<= nums[i-1]){
                moves += nums[i-1] - nums[i]+1;
                nums[i]= nums[i-1]+1;
        }
        }
        return moves;
    }
};