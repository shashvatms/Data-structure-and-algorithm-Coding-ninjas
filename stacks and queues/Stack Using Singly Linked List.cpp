 Implementation: Stack Using Singly Linked List
Moderate
Score
80/160
Average time to solve is 40m
Problem statement
Send feedback

Implement a Stack Data Structure specifically to store integer data using a Singly Linked List.

The data members should be private.

You need to implement the following public functions :

1. Constructor:

It initialises the data members as required.

2. push(data) :

This function should take one argument of type integer. It pushes the element into the stack and returns nothing.

3. pop() :

It pops the element from the top of the stack and in turn, returns the element being popped or deleted. In case the stack is empty, it returns -1.

4. top :

It returns the element being kept at the top of the stack. In case the stack is empty, it returns -1.

5. size() :

It returns the size of the stack at any given instance of time.

6. isEmpty() :

It returns a boolean value indicating whether the stack is empty or not.

Operations Performed on the Stack:
Query-1(Denoted by an integer 1): Pushes an integer data to the stack.

Query-2(Denoted by an integer 2): Pops the data kept at the top of the stack and returns it to the caller.

Query-3(Denoted by an integer 3): Fetches and returns the data being kept at the top of the stack but doesn't remove it, unlike the pop function.

Query-4(Denoted by an integer 4): Returns the current size of the stack.

Query-5(Denoted by an integer 5): Returns a boolean value denoting whether the stack is empty or not.

Detailed explanation ( Input/output format, Notes, Images )
 Constraints:
1 <= q <= 10^5
1 <= x <= 5
-2^31 <= data <= 2^31 - 1 and data != -1

Where 'q' is the total number of queries being performed on the stack, 'x' is the range for every query and data represents the integer pushed into the stack. 

Time Limit: 1 second

Sample Input 1:
6
1 13
1 47
4
5
2
3

Sample Output 1:
2
false
47
13

Sample Input 2:
4
5
2
1 10
5

Sample Output 2:
true
-1
false

 Explanation of Sample Input 2:
There are 4 queries in total.
The first one is Query-5: It tells whether the stack is empty or not. Since the stack is empty at this point, the output is  'true'.

The second one is Query-2: It pops the data from the stack. Since at this point in time, no data exist in the stack hence, it prints -1.

The third one is Query-1: It pushes the specified data 10 into the stack and since the function doesn't return anything, nothing is printed.

The fourth one is Query-5: It tells whether the stack is empty at this point or not. Since the stack has one element and hence it is not empty, false is printed.

  class Stack {
	Node* head;
    int size;
   public:
    Stack() {
        head = NULL;
        size = 0;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        if(head==NULL){
            return true;
        }
        return false;
    }
    void push(int element) {
        Node* newnode = new Node(element);
        if(head == NULL){
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
        size++;
    }
    int pop() {
        if(head==NULL){
            return -1;
        }
        int ans = head->data;
        head = head->next;
        size--;
        return ans;
    }

    int top() {
        if(head==NULL){
            return -1;
        }
        return head->data;
    }
};
