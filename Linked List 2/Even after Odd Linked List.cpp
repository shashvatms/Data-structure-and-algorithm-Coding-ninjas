
  Even after Odd Linked List
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

For a given singly linked list of integers, arrange the nodes such that all the even number nodes are placed after the all odd number nodes. The relative order of the odd and even terms should remain unchanged.

Note :
1. No need to print the linked list, it has already been taken care. Only return the new head to the list.
2. Don't create a new linked list.
3.  Just change the data, instead rearrange the provided list.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit: 1sec

Sample Input 1 :
1
1 4 5 2 -1

Sample Output 1 :
1 5 4 2 

Sample Input 2 :
2
1 11 3 6 8 0 9 -1
10 20 30 40 -1

Sample Output 2 :
1 11 3 9 6 8 0
10 20 30 40


Node *evenAfterOdd(Node *head)
{
	if(head==NULL||head->next==NULL){
        return head;
    }
    Node* oddhead = NULL;
    Node* oddtail = NULL;
    Node* evenhead = NULL;
    Node* eventail = NULL;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data%2!=0){
            if(oddhead==NULL){
                oddhead = temp;
                oddtail=temp;
            }
            else{
                oddtail->next = temp;
                oddtail = oddtail->next;
            }
        }
        else{
            if(evenhead==NULL){
                evenhead = temp;
                eventail = temp;
            }
            else{
                eventail->next = temp;
                eventail = eventail->next;
            }
        }
        temp=temp->next;
    }
    if(oddhead==NULL){
        return evenhead;
    }
    if(evenhead==NULL){
        oddtail->next==NULL;
        return oddhead;
    }
    oddtail->next = evenhead;
    eventail->next = NULL;
    return oddhead;


    
}
