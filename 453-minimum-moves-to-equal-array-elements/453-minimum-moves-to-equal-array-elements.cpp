class Solution {
public:
    int minMoves(vector<int>& nums) {
       int minimum = INT_MAX;
        
        for(auto it : nums){
            minimum = min(it, minimum);
        }
        
        int ans = 0;
        
        for(auto it : nums){
            ans += it - minimum;
        }
        
        return ans;
    }
};