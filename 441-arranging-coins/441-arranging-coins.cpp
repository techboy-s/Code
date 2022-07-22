class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, r = n, ans;
		long rows, coinsNeeded;
        while(l <= r) {
            rows = l + ((r-l) >> 1);                            // finding mid of range [l, r]
            coinsNeeded = (rows * (rows + 1)) >> 1;             // coins needed for 'rows' number of row
            if(coinsNeeded <= n) l = rows + 1, ans = rows;      // if available coins are sufficient
            else r = rows - 1;                                  // coins insufficient, eliminate the half greater than rows
        }
        return ans;
    }
};