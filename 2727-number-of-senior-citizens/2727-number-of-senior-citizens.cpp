class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto & i : details){
            int val = stoi(i.substr(11,2));
            if(val>60)
                count++;
        }
        return count;
    }
};