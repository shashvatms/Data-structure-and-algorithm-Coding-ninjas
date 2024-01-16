   Remove X
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

Given a string, compute recursively a new string where all 'x' chars have been removed.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3: 

// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    // Write your code here
 if (input[0] == '\0') {
        return;
    }

    // If the current character is 'x', shift the rest of the array to the left
    if (input[0] == 'x') {
        int i = 0;
        while (input[i] != '\0') {
            input[i] = input[i + 1];
            i++;
        }
        removeX(input); // Recursive call with the updated array
    } else {
        removeX(input + 1); // Recursive call on the rest of the array
    }

}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
