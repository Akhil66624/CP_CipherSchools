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
	void find_intersection_point(Node *first, Node *second)
	{
	   int k=1,i=0;
	   Node *start=first,*p1=second,*p2=second;
       while(first->next!=NULL)
       {
          first=first->next;
          k++;
       }
       first->next=start;
       for(i=0;i<k;i++)
       {
       	p2=p2->next;
       }
       while(p2!=p1)
       {
       	p1=p1->next;
       	p2=p2->next;
       }
       cout<<"Intersection is at node "<<p1->data;
	}
	
	
};
int main()
{
	Linked_list ls1,ls2;
	int n,i=0,x;
	cout<<"Enter the size of 1st Linked list :";
	cin>>n;
	cout<<"Enter List Elements :";
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls1.insert(x);
	}
	cout<<"Enter the size of 2nd Linked list :";
	cin>>n;
	cout<<"Enter List Elements :";
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls2.insert(x);
	}
	ls1.head->next->next->next->next->next->next=ls2.head->next->next->next->next->next->next;
	ls1.find_intersection_point(ls1.head,ls2.head);
	return 0;
}
