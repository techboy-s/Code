/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private boolean checkBST(TreeNode node, long min, long max) {
        if(node == null) return true; 
        if(node.val <= min || node.val >= max) return false; 
        
        if(checkBST(node.left, min, node.val) && checkBST(node.right, node.val, max)) {
            return true; 
        }
        return false; 
    }
    public boolean isValidBST(TreeNode root) {
        return checkBST(root, Long.MIN_VALUE, Long.MAX_VALUE); 
    }
}