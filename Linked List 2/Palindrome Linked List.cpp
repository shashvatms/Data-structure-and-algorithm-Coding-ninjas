 Palindrome Linked List
Easy
Score
80/80
Average time to solve is 20m
Problem statement
Send feedback

You have been given a head to a singly linked list of integers. Write a function check to whether the list given is a 'Palindrome' or not.

Detailed explanation ( Input/output format, Notes, Images )
 Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Time Limit: 1sec

Where 'M' is the size of the singly linked list.

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

   bool isPalindrome(Node* head) {
    if(head==NULL||head->next==NULL){
        return true;
    }
    Node* temp = head;
    int arr[10000] ;
    int j=0;
    while(temp!=NULL){
        arr[j] = temp->data;
        j++;
        temp = temp->next;
    }
    int flag = 1;
    int i=0,k=j-1;
    while(i<j){
        if(arr[i]==arr[k]){
            flag = 1;
        }
        else{
            flag =0;
            break;
        }
        i++;
        k--;
    }
    if(flag==1){
        return true;
    }
    else{
        return false;
    }

}
