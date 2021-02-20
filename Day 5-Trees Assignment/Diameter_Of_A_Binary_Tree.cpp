#include <bits/stdc++.h>
using namespace std;

class TreeNode 
{
    public:
    int data;
    TreeNode * left;
    TreeNode * right;
    TreeNode() 
    {
        TreeNode(0);
    }
    TreeNode(int data) 
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
int diameterOfBinaryTree(TreeNode *root, int* height)
 {
    if (root == NULL) 
    {
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0, ld = 0, rd = 0;
    ld = diameterOfBinaryTree(root->left, &lh);
    rd = diameterOfBinaryTree(root->right, &rh);

    *height = max(lh, rh) + 1;
    return max(lh + rh + 1, max(ld, rd));
}
int height(TreeNode* node)
{ 
    if (node == NULL)
    {
        return 0;
    }
    return 1 + max(height(node->left), height(node->right));
}
TreeNode* CreateNode(int data)
{
	TreeNode* newNode = new TreeNode(data);
	return newNode;
}
TreeNode* insert_node(TreeNode* root, int data)
{
    if (root == NULL) 
    {
        root = CreateNode(data);
        return root;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) 
    {
        TreeNode* temp = q.front();
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        else 
        {
		    temp->left = CreateNode(data);
            return root;
        }
 
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
        else 
        {
            temp->right = CreateNode(data);
			return root;
        }
    }
}
int main()
{
    TreeNode* root = CreateNode(0);
    int n,i=0,x,high=0,diameter=0;
    cout<<"Enter the no.of elements you want to insert into tree :";
    cin>>n;
    cout<<"Enter tree elements :";
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	root=insert_node(root,x);
    	a=root;
    }
    high=height(root);
    diameter=diameterOfBinaryTree(root,&height)
    cout<<"Diameter of tree :"<<diameter;
	return 0;
}
