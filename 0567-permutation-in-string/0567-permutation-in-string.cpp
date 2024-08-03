class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        if(m>n)
            return false;
        unordered_map<char,int>ma,mb;
        int i=0,j=0;
        while(i<m){
            ma[s1[i]]++;
            mb[s2[j]]++;
            i++;j++;
        }
        if(ma==mb)
            return true;
        i=0;
        while(j<n){
            mb[s2[j]]++;
            mb[s2[i]]--;
            if(mb[s2[i]]==0)
                mb.erase(s2[i]);
            if(ma==mb)
                return true;
            i++;
            j++;
        }

    return false;
    }
};