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
	void add_Lists(Node *first, Node *second)
	{
		int carry=0,sum=0;
		while(first!=NULL || second!=NULL)
		{
			int x,y;
			if(first)
			{
               x=first->data;
			}
			else
			{
				x=0;
			}
			if(second)
			{
               y=second->data;
			}
			else
			{
				y=0;
			}
			sum=carry+x+y;
			if(sum>=10)
			{
				carry=1;
			}
			sum=sum%10;
			insert(sum);
			if(first)
			{
				first=first->next;
			}
			if(second)
			{
				second=second->next;
			}
		}
		if(carry>0)
		{
			insert(carry);
		}
	}

	
};
int main()
{
	Linked_list ls1,ls2,res;
	int n,i=0,x;
	cout<<"Enter the size of 1st Linked list :";
	cin>>n;
	cout<<"Enter List Elements :";
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls1.insert(x);
	}
	cout<<"Enter the size of 2st Linked list :";
	cin>>n;
	cout<<"Enter List Elements :";
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls2.insert(x);
	}
	res.add_Lists(ls1.head,ls2.head);
	cout<<"Resultant List Elements are : ";
	res.traverse();
	return 0;
}
