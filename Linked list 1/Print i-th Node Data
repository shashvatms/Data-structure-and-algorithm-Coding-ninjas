 Print i-th Node Data
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

For a given a singly linked list of integers and a position 'i', print the node data at the 'i-th' position.

 Note :
Assume that the Indexing for the singly linked list always starts from 0.

If the given position 'i',  is greater than the length of the given singly linked list, then don't print anything.

Detailed explanation ( Input/output format, Notes, Images )
 Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
i  >= 0
Time Limit: 1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3

Sample Output 1 :
2

Sample Input 2 :
2
3 4 5 2 6 1 9 -1
0
9 8 4 0 7 8 -1
3

Sample Output 2 :
3
0


#include <iostream>

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
#include "solution.h"

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

void printIthNode(Node *head, int i)
{
	int count = 0;
	Node* temp = head;
	while(temp!=NULL){
		count++;
		if(count==i+1){
			cout<<temp->data;
		}
		temp=temp->next;
	}
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
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}
