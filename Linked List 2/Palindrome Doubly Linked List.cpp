 Palindrome Doubly Linked List
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

You have been given a head to a doubly linked list of integers. Write a function check to whether the list given is a 'Palindrome' or not.

Note:
There is no requirement for input or output handling. Your task is to implement a function that returns whether the given doubly linked list is a palindrome or not. The nodes in the doubly linked list are connected to its previous nodes using a 'prev' pointer in addition to the usual next pointer.

Detailed explanation ( Input/output format, Notes, Images )
 Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Time Limit: 1sec

Where 'M' is the size of the doubly linked list.

Sample Input 1 :
1
9 2 3 3 2 9 -1

Sample Output 1 :
true

Sample Input 2 :
2
0 2 3 2 5 -1
-1

Sample Output 2 :
false
true

Explanation for the Sample Input 2 :
For the first query, it is pretty intuitive that the the given list is not a palindrome, hence the output is 'false'.

For the second query, the list is empty. An empty list is always a palindrome , hence the output is 'true'.


  bool palindromeDLL(Node* head){
    if(head==NULL||head->next==NULL){
        return true;
    }
    Node* front = head;
    Node* rear = head;
    while(rear->next!=NULL){
        rear = rear->next;
    }
    int flag = 1;
    while(front!=rear){
        if(front->data==rear->data){
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
        front = front->next;
        rear = rear->prev;
    }
    if(flag==1){
        return true;
    }
    return false;
}
