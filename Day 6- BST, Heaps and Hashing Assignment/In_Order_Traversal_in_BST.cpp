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

    void InorderTraversalHelper(BSTNode<T> *temp)
    {
        if (temp)
        {
            InorderTraversalHelper(temp->left);
            cout << temp->data << " ";
            InorderTraversalHelper(temp->right);
        }
    }
  public:
    BinarySearchTree()
    {
        this->root = NULL;
        this->Size = 0;
    }

    void InorderTraversal()
    {
        BSTNode<T> *temp = this->root;
        InorderTraversalHelper(temp);
        cout << "\n";
    }

};
int main()
{
	return 0;
}
