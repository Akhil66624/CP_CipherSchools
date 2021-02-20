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
int searching(vector<int> vec, int start, int end, int x) 
{
    for (int i = start; i < end; i++) 
    {
        if (vec[i] == x) 
        {
            return i;
        }
    }
    return -1; 
}

int index = 0;
TreeNode * construct(vector<int>& pre, vector<int>& in, int start, int end) 
{
    if (start > end) return NULL;
    TreeNode * newNode = new TreeNode(pre[index]);
    index ++;
    if (start == end) 
    {
        return newNode;
    } 
    else 
    {
        int i = searching(in, start, end, newNode->data);
        newNode->left = construct(pre, in, start, i-1);
        newNode->right = construct(pre, in, i+1, end);
        return newNode;
    }
}
int main()
{
    int n,i=0,x;
    TreeNode* root;
    cout<<"Enter the no.of elements you want to insert into tree :";
    cin>>n;
    vector<int> v1,v2;
    cout<<"Enter pre order elements :";
    for(i=0;i<n;i++)
    {
    	cin>>v1[i];
    }
    cout<<"Enter in  order elements :";
    for(i=0;i<n;i++)
    {
    	cin>>v2[i];
    }
    cout<<"Pre order traversal of given binary tree is: ";
    root=construct(v1, v2, 0, n) 
    pre_order(TreeNode * root) 
	return 0;
}
