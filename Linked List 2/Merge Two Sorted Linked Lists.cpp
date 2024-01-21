 Merge Two Sorted Linked Lists
Moderate
Score
80/160
Average time to solve is 40m
Problem statement
Send feedback

You have been given two sorted(in ascending order) singly linked lists of integers.

Write a function to merge them in such a way that the resulting singly linked list is also sorted(in ascending order) and return the new head to the list.

Note :
Try solving this in O(1) auxiliary space.

No need to print the list, it has already been taken care.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t = 10^2
0 <= N <= 10 ^ 4
0 <= M <= 10 ^ 4
Where N and M denote the sizes of the singly linked lists. 

Time Limit: 1sec

Sample Input 1 :
1
2 5 8 12 -1
3 6 9 -1

Sample Output 1 :
2 3 5 6 8 9 12 

Sample Input 2 :
2
2 5 8 12 -1
3 6 9 -1
10 40 60 60 80 -1
10 20 30 40 50 60 90 100 -1

Sample Output 2 :
2 3 5 6 8 9 12 
10 10 20 30 40 40 50 60 60 60 80 90 100


  
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	Node* fhead = NULL;
	Node* ftail = NULL;
	if(head1->data>head2->data){
		fhead = head2;
		ftail = head2;
		head2=head2->next;
	}
	else{
		fhead = head1;
		ftail = head1;
		head1=head1->next;
	}
	while(head1!=NULL&&head2!=NULL){
		if(head1->data>head2->data){
			ftail->next = head2;
			head2=head2->next;
			ftail = ftail->next;
		}
		else{
			ftail->next = head1;
			head1=head1->next;
			ftail = ftail->next;
		}
	}
	if(head1==NULL){
		ftail->next = head2;
		head2 = head2->next;
		ftail = ftail->next;
	}
	else if(head2==NULL){
		ftail->next = head1;
		head1 = head1->next;
		ftail=ftail->next;
	}
	return fhead;
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
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}
