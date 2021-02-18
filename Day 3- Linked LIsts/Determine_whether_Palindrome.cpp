#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	struct Node* next;
	Node()
	{
		this->data=0;
		this->next=NULL;
	}
	Node(int val)
	{
		this->data=val;
		this->next=NULL;
	}
};
class Linked_list
{
  public:
  	Node *head;
  	Linked_list()
  	{
  		this->head=NULL;
  	}
  	void insert(int val)
  	{
  		Node *temp=new Node(val);
  		if(head==NULL)
  		{
          head=temp;
  		}
  		else
  		{
  			temp->next=head;
  			head=temp;
  		}
  	}
  	void traverse()
  	{
     Node *temp=head;
     while(temp!=NULL)
     {
     	cout<<temp->data<<" ";
     	temp=temp->next;
     }
  	}
  	bool palindrome_recursive(Node **left, Node *right) 
  	{
   
    if (right == NULL) 
    {
        return true;
    }
    bool isPalin = palindrome_recursive(left, right->next);
    if (!isPalin)
     {
        return false;
    }

    bool dataEqual = ((*left)->data == right->data);
    (*left) = (*left)->next;
    return dataEqual;
}

bool palindrome(Node * head)
{
    return palindrome_recursive(&head, head);
}
};
int main()
{
	Linked_list ls;
	bool ans;
	int n,i=0,x;
	cout<<"Enter the size of Linked list :";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls.insert(x);
	}
	ans=ls.palindrome(ls.head);
	if(ans)
	{
		cout<<"Yes Palindrome";
	}
	else
	{
		cout<<"No, Not Palindrome";
	}
	return 0;
}

