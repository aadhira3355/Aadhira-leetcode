class Solution:
    def reverseVowels(self, s: str) -> str:
        n=len(s)
        left=0
        right = n-1
        s=list(s)
        while(left < right):
            while(left<right) and s[left] not in "aeiouAEIOU":
                left+=1
            while(left < right) and s[right] not in "aeiouAEIOU":
                right-=1
            s[left],s[right] = s[right],s[left]
            left+=1
            right-=1
        return ''.join(s)
        