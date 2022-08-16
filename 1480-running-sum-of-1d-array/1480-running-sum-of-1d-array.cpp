class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // partial_sum(begin(nums), end(nums), begin(nums));
        
        int sum;
        vector<int> ans;
        for(int i = 0;i< nums.size(); i++){
            sum += nums[i];
            ans.push_back(sum);
        }
        
    return ans;
    }
};