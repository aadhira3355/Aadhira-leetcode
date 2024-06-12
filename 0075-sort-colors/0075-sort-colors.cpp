class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k= nums.size();
        for (int i =0 ; i<k ; i++){
            int mini = i;
            for(int j =i ;j<k ;j++){
                if(nums[mini]> nums[j])
                    mini=j;
            }swap(nums[i], nums[mini]);

        }
    }
};