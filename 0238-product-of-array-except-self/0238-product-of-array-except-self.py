class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        answer=[1]*n
        prefix=1
        suffix=1
        for i in range(0,n):
            answer[i]=prefix
            prefix*=nums[i]
        for j in range(n-1,-1,-1):
            answer[j]*=suffix
            suffix*=nums[j]
        
        return answer
        