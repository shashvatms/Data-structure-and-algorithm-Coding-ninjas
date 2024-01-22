 Swap Two Nodes of Linked List
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

You have been given a singly linked list of integers along with two integers, 'i,' and 'j.' Swap the nodes that are present at the 'i-th' and 'j-th' positions and return the new head to the list.

Note :
1. Remember, You need to swap the nodes, not only the data.
2. Indexing starts from 0.
3. No need to print the list, it has already been taken care.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.
0 <= i < M
0 <= j < M

Time Limit: 1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3 4

Sample Output 1 :
3 4 5 6 2 1 9 

 Sample Input 2 :
2
10 20 30 40 -1
1 2
70 80 90 25 65 85 90 -1
0 6

 Sample Output 2 :
10 30 20 40 
90 80 90 25 65 85 70 

  

Node *swapNodes(Node *head, int i, int j)
{
     if(head==NULL||head->next==NULL||i==j){
         return head;
     }
    Node* tempi = head;
    Node* tempj = head;
    for(int k=0;k<i-1;k++){
        tempi = tempi->next;
    }
    for(int k =0;k<j-1;k++){
        tempj=tempj->next;
    }
    Node* a = tempi->next; 
    Node* b = tempj->next;
    Node* nxt = a->next;
    Node* prv = b->next;
    tempi->next = b;
    b->next = nxt;
    tempj->next = a;
    a->next = prv;
    return head;
}
