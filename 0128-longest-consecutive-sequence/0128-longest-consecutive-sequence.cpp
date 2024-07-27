class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest =0,length;
        unordered_set<int>numset(nums.begin(),nums.end());
        for(int n: nums){
            length=0;
            if(numset.find(n-1) == numset.end()){
                while(numset.find(n+length) != numset.end())
                    length++;
                longest = max(longest,length);
            }
        }
        return longest;
        
            }
};