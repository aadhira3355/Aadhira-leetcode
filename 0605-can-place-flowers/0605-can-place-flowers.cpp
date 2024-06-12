class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l= flowerbed.size();
        //if n=0
         if (n == 0)
            return true;
        
        for (int i = 0; i < l; i++) {
            if (flowerbed[i] == 0) {
                // Check if the left side is empty or it's the first plot
                bool left_empty = (i == 0) || (flowerbed[i - 1] == 0);
                
                // Check if the right side is empty or it's the last plot
                bool right_empty = (i == l - 1) || (flowerbed[i + 1] == 0);
                
                // If both sides are empty, we can place a flower here
                if (left_empty && right_empty) {
                    flowerbed[i] = 1;  // Place a flower
                    n--;  // Decrease the number of flowers to place
                    
                    // If we have placed all flowers, return true
                    if (n == 0)
                        return true;
                }
            }
        }
        
        // If we couldn't place all flowers, return false
        return false;
    }
};