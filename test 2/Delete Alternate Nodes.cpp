 Delete Alternate Nodes
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given a Singly Linked List of integers, delete all the alternate nodes in the list.

Example:
List: 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> null
Alternate nodes will be:  20, 40, and 60.

Hence after deleting, the list will be:
Output: 10 -> 30 -> 50 -> null

Note :
The head of the list will remain the same. Don't need to print or return anything.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
1 2 3 4 5 -1

Sample Output 1:
1 3 5

Explanation of Sample Input 1:
2, 4 are alternate nodes so we need to delete them 

Sample Input 2:
10 20 30 40 50 60 70 -1

Sample Output 2:
10 30 50 70 

  void deleteAlternateNodes(Node *head) {
    /* Check for empty List*/
    if(head == NULL)
        return;
     
    Node *current_node = head;
    Node *next_node = head->next;
   
    /* Loop to iterate over the complete list*/
    while(next_node != NULL && current_node != NULL){
        current_node ->next = next_node->next;
       
        /* Removing the alternative node*/
        free(next_node);
       
        /*Updating current_node*/
        current_node  = current_node ->next;
        if (current_node != NULL) {
          next_node = current_node->next;
        }
    }
}
