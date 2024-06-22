class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int result=0;
        int oddcount=0;
        mp[oddcount]=1;
        int n= nums.size();
        for(int i=0;i<n;i++){
            oddcount+=(nums[i]%2);
            if(mp.count(oddcount-k)){
                result+=mp[oddcount-k];
            }
            mp[oddcount]++;
        }
        return result;
    }
};