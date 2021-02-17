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
	void reverse(Node **head)
  	{
  		Node *curr=*head,*prev=NULL,*next=NULL;
  		/*if(*head==NULL || *head->next==NULL)
  		{
  			return;
  		}
  		else
  		{*/
  			while(curr!=NULL)
  			{
  				next=curr->next;
  				curr->next=prev;
  				prev=curr;
  				curr=next;
  			}
  			*head=prev;
  		//}
  		return;
  	}
  	bool compare(Node *first, Node *second)
  	{
  		Node *temp1=first;
  		Node *temp2=second;
  		while(temp1 && temp2)
  		{
  			if(temp1->data==temp2->data)
  			{
  				temp1=temp1->next;
  				temp2=temp2->next;
  			}
  			else
  			{
  				return false;
  			}
  		}

  		if(temp1==NULL && temp2==NULL)
  		{
  			return true;
  		}

  		return false;
  	}
  	void check_for_palindrome()
  	{
  		Node *s_ptr=head,*f_ptr=head,*p_s_ptr=head,*second_list,*mid=NULL;
  		bool res;
  		if(head!=NULL && head->next!=NULL)
  		{
  			while(f_ptr!=NULL && f_ptr->next!=NULL)
  			{
  				f_ptr=f_ptr->next->next;
  				p_s_ptr=s_ptr;
  				s_ptr=s_ptr->next;
  			}
  			if(f_ptr!=NULL)
  			{
               mid=s_ptr;
               s_ptr=s_ptr->next;
  			}
  			second_list=s_ptr;
  			p_s_ptr->next=NULL;
  			reverse(&second_list);
            res=compare(head,second_list);
            if(res)
            {
            	cout<<"Yes, It is Palindrome";
            }
            else
            {
            	cout<<"No, It is not Palindrome";
            }
  		}
  	}
};
int main()
{
	Linked_list ls;
	int n,i=0,x;
	cout<<"Enter the size of Linked list :";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls.insert(x);
	}
	ls.check_for_palindrome();
	return 0;
}
