/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    unordered_map<int, unordered_map<int, multiset<int>>> m;
    void traverse(TreeNode* r, int x, int y) {
      if (r != nullptr) {
        m[x][y].insert(r->val);
        traverse(r->left, x - 1, y + 1);
        traverse(r->right, x + 1, y + 1);
      }
}
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> res;
      traverse(root, 0, 0);
      for (int x = -999; x < 1000; ++x) {
        auto it = m.find(x);
        if (it != end(m)) {
          res.push_back(vector<int>());
          for (int y = 0; y < 1000; ++y) {
            auto ity = it->second.find(y);
            if (ity != end(it->second)) {
              res.back().insert(end(res.back()), begin(ity->second), end(ity->second));
            }
          }
        }
      }
      return res;
    }
};