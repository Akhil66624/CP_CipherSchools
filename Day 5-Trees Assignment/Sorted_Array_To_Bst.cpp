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
void pre_order(TreeNode * root) 
{
    if (root != NULL) 
    {
        cout << root->data << " ";
        pre_order(root->left);
        pre_order(root->right);
    }
}
TreeNode * sorted_array_to_bst(vector<int> vec, int start, int end) {
    if (end < start) 
    {  
        return NULL;
    }
    if (start == end)
     {
        return new TreeNode(vec[start]);
    }
    
    int mid = start + (end - start)/2;
    TreeNode * newNode = new TreeNode(vec[mid]);
    newNode->left = sorted_array_to_bst(vec, start, mid - 1);
    newNode->right = sorted_array_to_bst(vec, mid + 1, end);
    return newNode; 
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

    cout<<"Enter the no.of elements :";
    cin>>n;
    vector<int> v[n];
    cout<<"Enter array elements in sorted manner:";
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	root=insert_node(root,x);
    	a=root;
    }
    root=sorted_array_to_bst(v,0,n);
    pre_order(root);
	return 0;
}
