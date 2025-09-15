class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result=[]
        m=max(candies)
        for i in candies:
            x=i+extraCandies
            if(x >= m):
                result.append(True)
            else:
                result.append(False)
        return result
