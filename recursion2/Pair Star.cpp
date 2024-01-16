 Pair Star
Moderate
Score
160/160
Average time to solve is 40m
Problem statement
Send feedback

Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
hello

Sample Output 1:
hel*lo

Sample Input 2 :
aaaa

Sample Output 2 :
a*a*a*a
// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    // Write your code here
    if (input[0] == '\0' || input[1] == '\0') {
        return;
    }

    // If the current character is equal to the next character, insert a '*' after it
    if (input[0] == input[1]) {
        int i = 0;
        while (input[i] != '\0') {
            i++;
        }

        // Shift the characters to the right to make space for '*'
        while (i >= 1) {
            input[i + 1] = input[i];
            i--;
        }

        input[1] = '*'; // Insert '*'
    }

    // Recursively check the rest of the string
    pairStar(input + 1);
}
