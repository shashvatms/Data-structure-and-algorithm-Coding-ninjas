 Next Number
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

Given a large number represented in the form of a linked list. Write code to increment the number by 1 in-place(i.e. without using extra space).

Note: You don't need to print the elements, just update the elements and return the head of updated LL. Input Constraints:
1 <= Length of Linked List <=10^6.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
3 9 2 5 -1

Sample Output 1 :
3 9 2 6

Sample Input 2 :
9 9 9 -1

Sample Output 1 :
1 0 0 0 


  


Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

Node* NextLargeNumber(Node *head) {
    // Reverse the linked list
    head = reverseLinkedList(head);

    Node* current = head;
    int carry = 1;

    while (current != nullptr) {
        int sum = current->data + carry;
        current->data = sum % 10;
        carry = sum / 10;

        if (carry == 0)
            break;

        if (current->next == nullptr) {
            current->next = new Node(carry);
            break;
        }

        current = current->next;
    }

    // Reverse the linked list again to get the result
    return reverseLinkedList(head);
}
