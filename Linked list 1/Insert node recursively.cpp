   Insert node recursively
Easy
Score
40/80
Average time to solve is 20m
Problem statement
Send feedback

Given a singly linked list of integers and position 'i', insert the given node at the 'i-th' position in the linked list recursively.

 Note :
Assume that the Indexing for the linked list always starts from 0.

No need to print the list, it has already been taken care. Only return the new head to the list.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.
0 <= i < M

Time Limit:  1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3
4

Sample Output 1 :
3 4 5 4 2 6 1 9

Sample Input 2 :
2
30 -1
0
2
10 20 30 50 60 -1
5
6

Sample Output 2 :
2 30
10 20 30 50 60 6

#include <iostream>
#include<stdio.h>


class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
Node* InsertNode(Node *head, int pos, Node* newNode)
{
    if(head == NULL){
        return newNode;
    }
    Node* temp = head;
    if(pos==0){
        newNode->next = temp;
        head = newNode;
    }
    else
    {
        head->next  = InsertNode(head->next,pos-1,newNode);
    }
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
    
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
        int val;
        cin>>val;
        Node* newNode = new Node(val);
		head = InsertNode(head, pos,newNode);
		print(head);
	}

	return 0;
}
