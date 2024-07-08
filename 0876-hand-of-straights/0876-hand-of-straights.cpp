class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize)
            return false;
        map<int,int>mp;
        for(int &i : hand){
            mp[i]++;
        }
        while(!mp.empty()){
            int curr = mp.begin()->first;// number second is freq
            for(int i=0; i<groupSize ; i++){
                 
                if(mp[i+curr]==0){  //curr+1 curr+2
                    return false;
                }
                mp[i+curr]--;
                if(mp[i+curr] < 1)
                    mp.erase(curr+i);
            }
        }
        return true;
    }
};