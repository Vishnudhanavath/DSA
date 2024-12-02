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


//========================================================
//Inorder

class Solution {
public:
    TreeNode* prev = nullptr;

    void createLinkedListInOrder(TreeNode* curr) {
        if (!curr) return;

        // Process the left subtree
        createLinkedListInOrder(curr->left);

        // Process the current node
        if (prev) {
            prev->left = nullptr;
            prev->right = curr;
        }
        prev = curr;

        // Process the right subtree
        createLinkedListInOrder(curr->right);
    }

    void flatten(TreeNode* root) {
        createLinkedListInOrder(root);
    }
};

//=================================================================
//postOrder
class Solution {
public:
    TreeNode* prev = nullptr;

    void createLinkedListPostOrder(TreeNode* curr) {
        if (!curr) return;

        // Process the left subtree
        createLinkedListPostOrder(curr->left);

        // Process the right subtree
        createLinkedListPostOrder(curr->right);

        // Process the current node
        if (prev) {
            curr->left = nullptr;
            curr->right = prev;
        }
        prev = curr;
    }

    void flatten(TreeNode* root) {
        createLinkedListPostOrder(root);
    }
};
