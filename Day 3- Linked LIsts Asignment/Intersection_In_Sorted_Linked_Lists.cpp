#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void traverse(Node * head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "\n";
}

int size(Node * head)
{
    Node *ptr = head;
    int size = 0;
    while (ptr != NULL)
    {
        size++;
        ptr = ptr->next;
    }
    return size;
}

Node * findIntersection(Node * a, Node * b) 
{
    if (a == NULL || b == NULL)
    {
        return NULL;
    }

    Node dummy;
    Node *result = &dummy;
    Node *ptr = a, *qtr = b;
    while(ptr != NULL && qtr != NULL) 
    {
        if (ptr->data == qtr->data) 
        {
            result->next = new Node(ptr->data);
            result = result->next;
            ptr = ptr->next;
            qtr = qtr->next;
        } 
        else if (ptr->data < qtr->data)
        {
            ptr = ptr->next;
        } 
        else 
        {
            qtr = qtr->next;
        }
    }
    return dummy.next;
}

int main()
{
	Node  *ls1,*ls2;
	int n,i=0,x;
	cout<<"Enter the size of 1st Linked list :";
	cin>>n;
	cout<<"Enter List Elements :";
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls1->data=x;
	}
	cout<<"Enter the size of 2nd Linked list :";
	cin>>n;
	cout<<"Enter List Elements :";
	for(i=0;i<n;i++)
	{
		cin>>x;
		ls2->data=x;
	}
    findIntersection(ls1,ls2);
	return 0;
}
