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
bool isMirror(TreeNode * a, TreeNode * b) 
{
    if (a == NULL && b == NULL) return true;
    if (a == NULL || b == NULL) return false;

    if (a->data == b->data) 
    {
        return isMirror(a->left, b->right) && isMirror(a->right, b->left);
    } 
    else 
    {
        return false;
    }
}

bool isMiror(TreeNode * root) 
{
    return isMirror(root->left, root->right);
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
    	a=root;
    }
    if(isMirror(root))
    {
    	cout<<"Yes,it is a Mirror";
    }
    else
    {
    	cout<<"No,it is not a Mirror";

    }
	return 0;
}
