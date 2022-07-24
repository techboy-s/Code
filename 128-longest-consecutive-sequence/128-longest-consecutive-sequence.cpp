class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        
       for(auto num : nums){
           hashSet.insert(num);
       }
        
        int largest = 0;
        
        for(auto num : nums){
            if(!hashSet.count(num -1)){
                int currentSum = num;
                int largestStreak = 1;
            
            
            while(hashSet.count(currentSum + 1)){
                currentSum += 1;
                largestStreak += 1;
            }
                
                 largest = max(largest , largestStreak);
            }
            
           
        }
        
        return largest;
    }
};