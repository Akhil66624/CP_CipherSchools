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
  	Node *remove_duplicates_sorted_List(Node * head)
  	 {
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node * curr = head;
    Node * nxt = NULL;
    while (curr->next != NULL) 
    {
        if (curr->data == curr->next->data) 
        {
            nxt = curr->next;
            curr->next = nxt->next;
            delete nxt;
        } 
        else 
        {
            curr = curr->next;
        }
    }
    return head;

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
	cout<<"Elements before reversing : ";
	ls.traverse();
	cout<<endl<<endl;
	ls.remove_duplicates_sorted_List(ls.head);
	cout<<"Elements after reversing : ";
	ls.traverse();
	return 0;
}

