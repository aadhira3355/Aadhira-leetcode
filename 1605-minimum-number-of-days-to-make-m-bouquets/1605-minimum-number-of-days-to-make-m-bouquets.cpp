class Solution {
public:
int canmake(vector<int>& bloomDay, int mid, int k){
    int bouqcount = 0;
    int conseccount=0;

    for(int i=0 ;i<bloomDay.size(); i++){
        if(bloomDay[i]<= mid){
            conseccount++;
        }else{
            conseccount=0;
        }
        if(conseccount==k){
            bouqcount++;
            conseccount=0;
        }
    }
    return bouqcount;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int start_day=0;
        int end_day= *max_element(bloomDay.begin(), bloomDay.end());
        int mindays=-1;

        while(start_day <= end_day){
            int mid = start_day +(end_day- start_day) / 2;

            if(canmake(bloomDay,mid,k)>=m){
                mindays=mid;
                end_day= mid-1;
            }else{
                start_day = mid+1;
            }
        }
        return mindays;
    }
};