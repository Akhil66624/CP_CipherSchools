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
  public:
    BinarySearchTree()
    {
        this->root = NULL;
        this->Size = 0;
    }

    T GetMin(BSTNode<T> *curr)
    {
        if (curr == NULL)
        {
            throw "Can't find min value. BST empty!!";
        }
        else
        {
            while (curr->left)
            {
                curr = curr->left;
            }
            return curr->data;
        }
    }
};
int main()
{
	return 0;
}
