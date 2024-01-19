  Length of LL (recursive)
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given a linked list, find and return the length of the given linked list recursively.

Detailed explanation ( Input/output format, Notes, Images )
 Constraints :
1 <= t <= 20
0 <= N <= 10^4
Time Limit: 1 sec

Sample Input 1:
1 
3 4 5 2 6 1 9 -1

Sample Output 1:
7

  

int length(Node *head) {
   if(head==NULL){
       return 0;
   }
   else{
       return 1+length(head->next);
   }

}
