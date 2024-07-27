class Solution {
public:
    bool isalphanum(char c){
        return (c >='a'&& c<='z') || (c >='A'&& c<='Z') || (c >='0'&& c<='9');
    }
    bool isPalindrome(string s) {
        string filtered="";
        for(char c:s){
            if(isalphanum(c))
                filtered+=tolower(c);
        }
        int l=0, r=filtered.size()-1;
        while(l<r){
            if(filtered[l]!=filtered[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};