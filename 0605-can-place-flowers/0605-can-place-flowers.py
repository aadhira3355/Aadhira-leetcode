class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        length= len(flowerbed)
        for i in range(length):
            if flowerbed[i]==0:
                left = i==0 or (flowerbed[i-1]==0)
                right = i== (length-1) or (flowerbed[i+1]==0)

                if(left and right):
                    flowerbed[i]=1
                    n-=1
        return n<=0

        