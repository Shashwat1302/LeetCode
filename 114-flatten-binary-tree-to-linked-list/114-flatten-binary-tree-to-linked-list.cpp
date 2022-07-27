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
#include<bits/stdc++.h>
class Solution {
    
public:
    //vector <int> v;
    void bt(TreeNode* root, vector<TreeNode*>&v){
        if(!root)
            return;
        v.push_back(root);
        bt(root->left, v);
        bt(root->right, v);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> vt ;
        bt(root, vt);
        TreeNode* l = root;
        for(int i=1;i<vt.size();i++){
           l->right=vt[i];
            l->left=NULL;
            l=l->right;
        }
    }
};