class Solution {

    
private:
       bool subsetSumToK(int n, int k, vector<int> &arr){
    vector<bool> prev(k+1,false);
    
    prev[0] = true;
    
    if(arr[0]<=k)
        prev[arr[0]] = true;
    
    for(int ind = 1; ind<n; ind++){
        vector<bool> cur(k+1,false);
        cur[0] = true;
        for(int target= 1; target<=k; target++){
            bool notTaken = prev[target];
    
            bool taken = false;
                if(arr[ind]<=target)
                    taken = prev[target-arr[ind]];
        
            cur[target]= notTaken||taken;
        }
        prev = cur;
    }
    
    return prev[k];
}

    
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        
        for(int i = 0;i<n; i++)
            totalsum += nums[i];
        
        if(totalsum % 2) return false;
        
        int target = totalsum/2;
        
        return subsetSumToK(n, target, nums);
    }
};