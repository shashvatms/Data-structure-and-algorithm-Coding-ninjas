 Check redundant brackets
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

For a given expression in the form of a string, find if there exist any redundant brackets or not. It is given that the expression contains only rounded brackets or parenthesis and the input expression will always be balanced.

A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary or needless brackets.

Example:
Expression: (a+b)+c
Since there are no needless brackets, hence, the output must be 'false'.

Expression: ((a+b))
The expression can be reduced to (a+b). Hence the expression has redundant brackets and the output will be 'true'.

Note:
You will not get a partial score for this problem. You will get marks only if all the test cases are passed.
Return "false" if no brackets are present in the input.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the expression.

Time Limit: 1 second

Sample Input 1:
a+(b)+c 

Sample Output 1:
true

Explanation:
The expression can be reduced to a+b+c. Hence, the brackets are redundant.

Sample Input 2:
(a+b)

Sample Output 2:
false

  #include<stack>
bool checkRedundantBrackets(string expression) {
	 stack<char> s;

    for (char ch : expression) {
        if (ch != ')') {
            s.push(ch);
        } else {
            // If we encounter a closing parenthesis, check for redundancy
            bool foundOperator = false;
            while (!s.empty() && s.top() != '(') {
                if (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/') {
                    foundOperator = true;
                }
                s.pop();
            }
            s.pop();  // Pop the opening parenthesis

            if (!foundOperator) {
                // Redundant brackets found
                return true;
            }
        }
    }

    return false;
}
