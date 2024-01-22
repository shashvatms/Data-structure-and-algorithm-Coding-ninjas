 Find a Node in LL (recursive)
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

Given a singly linked list of integers and an integer n, find and return the index for the first occurrence of 'n' in the linked list. -1 otherwise.

Follow a recursive approach to solve this.

Note :
Assume that the Indexing for the linked list always starts from 0.

Detailed explanation ( Input/output format, Notes, Images )
 Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.

Time Limit:  1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
100

Sample Output 1 :
-1

Sample Input 2 :
2
10 20010 30 400 600 -1
20010
100 200 300 400 9000 -34 -1
-34

Sample Output 2 :
1
5


  
int findNodeRec(Node *head, int n) {
    if(head==NULL){
        return -1;
    }
    if(head->data==n){
        return 0;
    }
    int result = findNodeRec(head->next,n);
    if(result==-1){
        return -1;
    }
    else{
        return 1+result;
    }
}
