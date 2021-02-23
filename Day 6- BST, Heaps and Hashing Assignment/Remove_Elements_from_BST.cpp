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

     BSTNode<T> *RemoveHelper(BSTNode<T> *curr, T data)
    {
        if (curr == NULL)
        {
            return NULL;
        }

        if (curr->data > data)
        {
            curr->left = RemoveHelper(curr->left, data);
            return curr;
        }
        else if (curr->data < data)
        {
            curr->right = RemoveHelper(curr->right, data);
            return curr;
        }
        else
        {
            if (!curr->left && !curr->right)
            {
                delete (curr);
                return NULL;
            }
            else if (!curr->left)
            {
                BSTNode<T> *temp = curr->right;
                delete (curr);
                return temp;
            }
            else if (!curr->right)
            {
                BSTNode<T> *temp = curr->left;
                delete (curr);
                return temp;
            }
            else
            {
                curr->data = GetMax(curr->left);
                curr->left = RemoveHelper(curr->left, curr->data);
                return curr;
            }
        }
    }

  public:
    BinarySearchTree()
    {
        this->root = NULL;
        this->Size = 0;
    }

    void Remove(T data)
    {
        BSTNode<T> *curr = this->root;
        this->root = RemoveHelper(curr, data);
        this->Size--;
    }

};
int main()
{
	return 0;
}
