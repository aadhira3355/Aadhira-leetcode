class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int>prime(n+1,1);
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i<=n;i++){
            if(prime[i]==1){
                for(int j=2;i*j<=n ; j++){
                    prime[i*j]=0;
                }
            }
        }
        vector<vector<int>>ans;
        for(int i=2;i<=n/2;i++){
            if(prime[i]){
                if(prime[n-i]){
                    ans.push_back({i,n-i});
                }
            }
        }
        return ans;

    }
};