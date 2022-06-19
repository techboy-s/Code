// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
   public:
   void recur(vector<string>&ans,vector<vector<int>>&m,int n,int i,int j,string temp){
       if(i==n-1&&j==n-1&&m[n-1][n-1]){
           ans.push_back(temp);
           return;
       }
       if(i<0||j<0||i>=n||j>=n||m[i][j]==0)return;
       m[i][j]=0;
       recur(ans,m,n,i+1,j,temp+'D');
       recur(ans,m,n,i,j+1,temp+'R');
       recur(ans,m,n,i-1,j,temp+'U');
       recur(ans,m,n,i,j-1,temp+'L');
       m[i][j]=1;
            return;
   }
   vector<string> findPath(vector<vector<int>> &m, int n) {
     vector<string>ans;
   
     recur(ans,m,n,0,0,"");
     return ans;
   }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends