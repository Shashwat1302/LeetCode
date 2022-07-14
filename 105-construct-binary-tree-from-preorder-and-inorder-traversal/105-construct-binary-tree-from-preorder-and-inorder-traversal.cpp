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
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> map;
        for(int i = 0; i < inorder.size(); i++){
            map[inorder[i]] = i;
        }
        return f(0,0,preorder.size()-1,preorder,inorder,map);
    }
    
    TreeNode* f(int p, int i, int j,vector<int>& preorder, vector<int>& inorder,unordered_map<int,int>& map){
        if(i > j || p >= preorder.size() || p < 0)
            return nullptr;
        int rootval = preorder[p];
        int k = map[rootval];
        TreeNode* root = new TreeNode(rootval);
        root->left = f(p+1, i, k-1,preorder,inorder,map);
        if(root->left)
            p = p + k - i;
        root->right = f(p+1, k+1, j,preorder,inorder,map);
        return root;
    }
};