/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root==NULL){
        return root;
    }
    swap(root);
    if (root->left != NULL)
        invertTree(root->left);
    if (root->right != NULL)
        invertTree(root->right);
    return root;
}

void swap(struct TreeNode* root){
    if(root->left!=NULL && root->right!=NULL){
        int *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    else if(root->left==NULL && root->right!=NULL){     //原本右值有
        root->left=root->right;
        root->right=NULL;
    }
    else if(root->left!=NULL && root->right==NULL){     //原本zuo值有
        root->right=root->left;
        root->left=NULL;
    }
}
