#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
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
		return;
	}
	void traverse()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		return;
	}
	void remove_Loop(Node *l_node)
	{
      Node *p1=l_node,*p2=l_node;
      int k=1,i=0;
      while(p2->next!=p1)
      {
      	p2=p2->next;
      	k++;
      }
      p1=head;
      p2=head;
      for(i=0;i<k;i++)
      {
      	p2=p2->next;
      }
      while(p1!=p2)
      {
      	p1=p1->next;
      	p1=p2->next;
      }
      while(p2->next!=p1)
      {
      	p2=p2->next;
      }
      p2->next=NULL;
	}
	bool detect_Loop()
	{
		Node *s_ptr=head,*f_ptr=head;
		while(s_ptr!=NULL && f_ptr!=NULL && f_ptr->next!=NULL)
		{
			s_ptr=s_ptr->next;
			f_ptr=f_ptr->next->next;
			if(s_ptr==f_ptr)
			{
				remove_Loop(s_ptr);
				return true;
			}
		}
		return false;

	}
	
};
int main()
{
	Linked_list ls;
	int n,i=0,x;
	cout<<"Enter the size of Linked list :";
	cin>>n;
	cout<<"Enter List Elements :";
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls.insert(x);
	}
	ls.head->next->next->next->next->next=ls.head->next->next->next;
	//ls.traverse();
	if(ls.detect_Loop())
	{
      cout<<"The loop is removed in the list and list elements are : ";
      ls.traverse();
	}
	else
	{
      cout<<"There is no loop in list and list elements are : ";
      ls.traverse();
	}
	return 0;
}
