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

    void PreorderTraversalHelper(BSTNode<T> *temp)
    {
        if (temp)
        {
            cout << temp->data << " ";
            PreorderTraversalHelper(temp->left);
            PreorderTraversalHelper(temp->right);
        }
    }
  public:
    BinarySearchTree()
    {
        this->root = NULL;
        this->Size = 0;
    }

    void PreorderTraversal()
    {
        BSTNode<T> *temp = this->root;
        PreorderTraversalHelper(temp);
        cout << "\n";
    }
};
int main()
{
	return 0;
}
