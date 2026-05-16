#include <iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    public:
    TreeNode(int x){
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    
    }
};

    void preorder(TreeNode* root) {

    if(root == NULL)
        return;

    cout << root->data << " ";

    preorder(root->left);

    preorder(root->right);
}

int main()
{
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    preorder(root);

    

    return 0;  
}


