# include <iostream>
using namespace std;

class TreeNode{
    private:
    int data;
    TreeNode* left;
    TreeNode* right;

    public:
    TreeNode(int x){
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
    void setLeft(TreeNode* node){
        left = node;
    }

    void setRight(TreeNode* node){
        right = node;
    }

    void display(){
        cout << data << endl;
        if (left != NULL){
            cout << left->data<< endl;
        }
        else if (right != NULL)
        {
            cout << right->data << endl;
        }   
    }
} ;

int main()
{
    TreeNode* root = new TreeNode(10);
    TreeNode* a = new TreeNode(20);
    TreeNode* b = new TreeNode(30);

    root->setLeft(a);
    root->setRight(b);

    root->display();

    return 0;  
}