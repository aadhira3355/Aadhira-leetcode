class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int num1= INT_MAX;
        int num2=INT_MAX;
        int num3;
        for(int i=0;i<n;i++){
            num3=nums[i];
            //first ask num1
            if(num3<=num1)
                num1=num3;
            //ask num2
            else if(num3<=num2)
                num2=num3;
            else
                return true;//if num1<num2 then life set hai bhai
        }
        return false;

    }
};