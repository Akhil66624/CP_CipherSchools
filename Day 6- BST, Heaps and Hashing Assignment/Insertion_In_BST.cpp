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

    BSTNode<T> *InsertHelper(BSTNode<T> *curr, T data)
    {
        if (!curr)
        {
            return new BSTNode<T>(data);
        }

        if (curr->data > data)
        {
            curr->left = this->InsertHelper(curr->left, data);
        }
        else
        {
            curr->right = this->InsertHelper(curr->right, data);
        }
        return curr;
    }
  public:
    BinarySearchTree()
    {
        this->root = NULL;
        this->Size = 0;
    }

    void Insert(T data)
    {
        BSTNode<T> *curr = this->root;
        this->root = this->InsertHelper(curr, data);
        this->Size++;
    }

};
int main()
{
	return 0;
}
