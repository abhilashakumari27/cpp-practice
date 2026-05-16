#include<iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void inorder(TreeNode* root) {

    if(root == NULL)
        return;

    inorder(root->left);     

    cout << root->data << " ";

    inorder(root->right);  
}

int main() {

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    inorder(root);

    return 0;
}