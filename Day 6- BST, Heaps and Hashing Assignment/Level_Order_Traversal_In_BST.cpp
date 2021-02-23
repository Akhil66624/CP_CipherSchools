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

    void LevelOrderTraversal()
    {
        BSTNode<T> *p = this->root;
        queue<BSTNode<T> *> Q;
        Q.push(p);
        while (!Q.empty())
        {
            p = Q.front();
            cout << p->data << " ";
            Q.pop();

            if (p->left)
            {
                Q.push(p->left);
            }

            if (p->right)
            {
                Q.push(p->right);
            }
        }
        cout << "\n";
    }
};
int main()
{
	return 0;
}
