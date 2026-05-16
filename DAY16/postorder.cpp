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

void postorder(TreeNode* root) {

    if(root == NULL)
        return;

    postorder(root->left);   // Left

    postorder(root->right);  // Right

    cout << root->data << " "; // Root
}

int main() {

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    postorder(root);

    return 0;
}