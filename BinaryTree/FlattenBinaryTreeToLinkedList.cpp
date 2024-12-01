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
    //this is a preorder Traversal 
    TreeNode*prev = nullptr;

    void createLinkedList(TreeNode* curr){
        if(!curr) return;
        if(prev){
            prev ->left= nullptr;
            prev ->right = curr;
            
        }
        TreeNode* r = curr->right;
        prev = curr;
        createLinkedList(curr->left);
        createLinkedList(r);
    }


    void flatten(TreeNode* root) {
        createLinkedList(root);
    }
};
