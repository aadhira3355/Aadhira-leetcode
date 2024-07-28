class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxarea=0;
        while(l<r){
        int h = min(height[l],height[r]);
        maxarea = max(maxarea,h*(r-l));
        if(height[l] < height[r])
            l++;
        else if(height[r] < height[l])
            r--;
        else
            r--;
        }
        return maxarea;
    }
};