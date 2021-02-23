#include <bits/stdc++.h>
using namespace std;
template <class T>
class BSTNode
{
  public:
    T data;
    BSTNode<T> *left, *right;

    BSTNode()
    {
        this->left = this->right = NULL;
    }

    BSTNode(T data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
template <class T>
class BinarySearchTree
{
  private:
    BSTNode<T> *root;
    int Size;

    void PostorderTraversalHelper(BSTNode<T> *temp)
    {
        if (temp)
        {
            PostorderTraversalHelper(temp->left);
            PostorderTraversalHelper(temp->right);
            cout << temp->data << " ";
        }
    }
  public:
    BinarySearchTree()
    {
        this->root = NULL;
        this->Size = 0;
    }

    void PostorderTraversal()
    {
        BSTNode<T> *temp = this->root;
        PostorderTraversalHelper(temp);
        cout << "\n";
    }
};
int main()
{
	return 0;
}
