class Solution:
    def makeFancyString(self, s: str) -> str:
        freq=1
        result=s[0]
        for i in range(1,len(s)):
            if s[i]==result[-1]:
                freq+=1
                if freq<3:
                    result+=s[i]
            else:
                freq=1
                result+=s[i]
        return result

        