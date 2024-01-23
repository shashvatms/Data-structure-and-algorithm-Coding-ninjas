 Reverse a Stack
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

You have been given two stacks that can store integers as the data. Out of the two given stacks, one is populated and the other one is empty. You are required to write a function that reverses the populated stack using the one which is empty.

For Example:

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10^3
-2^31 <= data <= 2^31 - 1

Time Limit: 1sec 

Sample Input 1:
6
1 2 3 4 5 10

Note:
Here, 10 is at the top of the stack.

Sample Output 1:
1 2 3 4 5 10

Note:
Here, 1 is at the top of the stack.

Sample Input 2:
5
2 8 15 1 10

Sample Output 2:
2 8 15 1 10

  void reverseStack(stack<int> &input, stack<int> &extra) {
      while (!input.empty()) {
        int top = input.top();
        input.pop();
        extra.push(top);
    }

    input = extra;
}
