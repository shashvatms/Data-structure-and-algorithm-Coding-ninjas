Check if the Brackets are Balanced
Moderate
Score
80/160
Average time to solve is 40m
Problem statement
Send feedback

For a given a string expression containing only round brackets or parentheses, check if they are balanced or not. Brackets are said to be balanced if the bracket which opens last, closes first.

Example:
Expression: (()())
Since all the opening brackets have their corresponding closing brackets, we say it is balanced and hence the output will be, 'true'.


You need to return a boolean value indicating whether the expression is balanced or not.

Note:
The input expression will not contain spaces in between.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10^7
 Where N is the length of the expression.

Time Limit: 1sec

Sample Input 1 :
(()()())

Sample Output 1 :
true

Sample Input 2 :
()()(()

Sample Output 2 :
false

Explanation to Sample Input 2:
The initial two pairs of brackets are balanced. But when you see, the opening bracket at the fourth index doesn't have its corresponding closing bracket which makes it imbalanced and in turn, making the whole expression imbalanced. Hence the output prints 'false'.

  #include<stack>

bool isBalanced(string expression) {
    stack<char> temp;
    for(int i=0;i<expression.size();i++){
        if(temp.empty()){
            temp.push(expression[i]);
        }
        else if(temp.top()=='('&&expression[i]==')'){
            temp.pop();
        }
        else{
            temp.push(expression[i]);
        }
    }
    if(temp.empty()){
        return true;
    }
    else{
        return false;
    }
}
