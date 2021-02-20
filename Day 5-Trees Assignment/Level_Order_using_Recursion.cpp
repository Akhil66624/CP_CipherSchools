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
void level_order(TreeNode * root) 
{
    if (root == NULL)
    {
    	return;
	}
    int levels = Height(root);
    for (int level = 1; level <= levels; level++)
	 {
        printGivenLevel(root, level);
    }
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
    int n,i=0,x;
    cout<<"Enter the no.of elements you want to insert into tree :";
    cin>>n;
    cout<<"Enter tree elements :";
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	root=insert_node(root,x);
    }
    
    cout<<"Level order traversal of given binary tree is: ";
    level_order(root);
	return 0;
}
