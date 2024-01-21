 MergeSort Linked List
Moderate
Score
80/160
Average time to solve is 40m
Problem statement
Send feedback

 Given a singly linked list of integers, sort it using 'Merge Sort.'

Note :
No need to print the list, it has already been taken care. Only return the new head to the list.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit: 1sec

Sample Input 1 :
1
10 9 8 7 6 5 4 3 -1

Sample Output 1 :
 3 4 5 6 7 8 9 10 

 Sample Input 2 :
2
-1
10 -5 9 90 5 67 1 89 -1

Sample Output 2 :
-5 1 5 9 10 67 89 90 


  Node* merge(Node* head1,Node* head2){
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
		head2 = head2->next;
	}
	else{
		fhead = head1;
		ftail = head1;
		head1 = head1->next;
	}
	while(head1!=NULL&&head2!=NULL){
		if(head1->data>head2->data){
			ftail->next =  head2;
			head2 = head2->next;
			ftail = ftail->next;
		}
		else{
			ftail->next =  head1;
			head1 = head1->next;
			ftail = ftail->next;			
		}
	}
	if(head1==NULL){
			ftail->next =  head2;
			head2 = head2->next;
			ftail = ftail->next;		
	}
	else{
			ftail->next =  head1;
			head1 = head1->next;
			ftail = ftail->next;		
	}
	return fhead;
}
Node *mergeSort(Node *head)
{
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		return head;
	}
	Node* slow = head;
	Node* fast = head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast = fast->next->next;
	}
	Node* mid = slow;
	Node* rightstart = mid->next;
	mid->next = NULL;
	Node* left = mergeSort(head);
	Node* right = mergeSort(rightstart);
	Node* mainhead = merge(left,right);
	return mainhead;
}
