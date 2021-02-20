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
void post_order_iterative(TreeNode * root) 
{
    if (root == NULL) {
        return;
    }

    stack<TreeNode*> s1, s2;
    s1.push(root);
    
    while (!s1.empty()) 
	{
        root = s1.top(); s1.pop();
        s2.push(root);

        if (root->left)
        {
        	s1.push(root->left);
		}
            
        if (root->right)
        {
        	 s1.push(root->right);
		}
           
    }

    while (!s2.empty()) 
	{
        int data = s2.top()->data; s2.pop();
        cout << data << " ";
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
    
    cout<<"Post order traversal of given binary tree is: ";
    post_order_iterative(root);
	return 0;
}
